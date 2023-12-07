/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msciacca <msciacca@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:16:14 by msciacca          #+#    #+#             */
/*   Updated: 2023/12/07 18:19:42 by msciacca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>
# include <cctype>

template<typename T>

void	iter(T *array, size_t len, void (*f)(T &))
{
	if (array == NULL || f == NULL)
		return ;
	for (size_t i = 0; i < len; i++)
		f(array[i]);
}
#endif /* !ITER_HPP */