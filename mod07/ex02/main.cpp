/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:21:50 by kpucylo           #+#    #+#             */
/*   Updated: 2022/05/04 12:19:27 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int> a(3);
	try
	{
		int i = a[4];
	}
	catch(const Array<int>::OutOfBoundsExcept& e)
	{
		std::cerr << e.what() << std::endl;
	}
	a[1] = 2;
	std::cout << a[1] << std::endl;
	Array<int>b(a);
	a[1] = 3;
	std::cout << a[1] << std::endl;
	std::cout << b[1] << std::endl;
	std::cout << "Size of a: " << a.size() << std::endl;
	std::cout << "Size of b: " << b.size() << std::endl;
	Array<int> c = b;
	std::cout << c[1] << std::endl;
	std::cout << "Size of c: " << c.size() << std::endl;
}
