/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msciacca <msciacca@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:41:10 by msciacca          #+#    #+#             */
/*   Updated: 2023/12/08 16:53:25 by msciacca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>

class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	
	public:
		Array(): _size(0)
		{
			this->_array = new T[this->_size];
		}

		Array(unsigned int size): _size(size)
		{
			this->_array = new T[this->_size];
		}

		Array(const Array &src): _size(src.size())
		{
			this->_array = NULL;
			*this = src;
		}

		~Array()
		{
			if (this->_array)
				delete [] this->_array;
		}

		Array &operator=(const Array &src)
		{
			if (this->_array)
				delete [] this->_array;
			if (src.size() >= 0)
			{
				this->_size = src.size();
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = src._array[i];
			}
			return (*this);
		}

		T &operator[](unsigned int index)
		{
			if (index >= this->_size || this->_array == NULL)
				throw Array<T>::InvalidIndexException();
			return (this->_array[index]);
		}

		class InvalidIndexException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Error: Invalid index");
				}
		};

		unsigned int size() const
		{
			return (this->_size);
		}
};

#endif /* !ARRAY_HPP */