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

void	UnitConverter::output(double v1, std::string n1, double (*f)(double), std::string n2)
{
	std::cout << v1 << " " << n1 << " = " << f(v1) << " " << n2 << "\n";
}

t_mathfuncptr UnitConverter::get_function(const std::string key)
{
    // In uc.cpp, inside get_function:
    auto it = s_function_map.find(key);
        
    if (it != s_function_map.end()) {
        // The correct way to get the pointer:
        // We explicitly cast the result of target() to the expected type, 
        // and rely on the target function to correctly retrieve the type.
        t_mathfuncptr func_ptr = it->second.target<t_mathfuncptr>();

        if (func_ptr) {
            return func_ptr;
        }
    }
    
    // Key not found, or the std::function held a lambda/functor instead of a raw pointer.
    return nullptr; 
}

void	UnitConverter::run(int ac, char **av)
{
	t_main			data;
	t_mathfuncptr	func_to_call;

	std::cout << "Unit Converter.\n";
	UnitConverter::checkargs(ac);
	UnitConverter::save_values(av, &data);
	func_to_call = UnitConverter::get_function(data.str2);
	if (func_to_call != NULL)
		UnitConverter::output(data.v1, data.u1, func_to_call, data.u2);
	else
		std::cout << "Error: Function '" << data.str2 << "%s' not found.\n";
}

int	main(int ac, char **av)
{
	UnitConverter::run(ac, av);
	return (0);
}
