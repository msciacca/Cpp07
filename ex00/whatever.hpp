/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msciacca <msciacca@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:16:11 by msciacca          #+#    #+#             */
/*   Updated: 2023/12/07 18:16:12 by msciacca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>

template<typename T>

const	T &max(const T &x,const T &y)
{
	return (x >= y ? x : y);
}

template<typename U>

const	U &min(const U &x, const U &y)
{
	return (x <= y ? x : y);
}

template<typename V>

void	swap(V &x, V &y)
{
	V tmp = x;
	x = y;
	y = tmp;
}

#endif /* !WHATEVER_HPP */