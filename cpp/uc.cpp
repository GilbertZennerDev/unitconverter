/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   uc.c											   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: gzenner <gzenner@student.42.fr>			+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/11/10 08:09:01 by gzenner		   #+#	#+#			 */
/*   Updated: 2025/11/10 14:19:20 by gzenner		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "uc.hpp"

void	output(double v1, char *n1, double (*f)(double), char *n2)
{
	std::cout << v1 << " " << n1 << " = " << f(v1) << " " << n2 << "\n";
}

t_mathfuncptr	get_function(const char *key)
{
	int	i;

	i = 0;
	while (g_function_map[i].key != NULL)
	{
		if (strcmp(g_function_map[i].key, key) == 0)
			return (g_function_map[i].func);
	}
	return (NULL);
}

void	run(int ac, char **av)
{
	t_main			data;
	t_mathfuncptr	func_to_call;

	std::cout << "Unit Converter.\n";
	checkargs(ac);
	save_values(av, &data);
	func_to_call = get_function(data.str2);
	if (func_to_call != NULL)
		output(data.v1, data.u1, func_to_call, data.u2);
	else
		std::cout << "Error: Function '" << data.str2 << "%s' not found.\n";
	free_data(&data);
}

int	main(int ac, char **av)
{
	run(ac, av);
	return (0);
}
