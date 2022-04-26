/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpucylo <kpucylo@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:05:01 by kpucylo           #+#    #+#             */
/*   Updated: 2022/04/25 17:19:10 by kpucylo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
public:

	Fixed(void);
	Fixed(Fixed &copy);
	~Fixed(void);

	Fixed &operator=(Fixed &f);

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:

	int _fp_value;
	const static int _bits = 8;
};

#endif
