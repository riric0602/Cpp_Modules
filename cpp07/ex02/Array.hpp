/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchbouki <rchbouki@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:26:29 by rchbouki          #+#    #+#             */
/*   Updated: 2024/03/06 14:28:09 by rchbouki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <iostream>
#include <exception>
#include <cstdlib>
#include <ctime>

template<typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:
		class OutOfBounds: public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Index of Array is out of bounds.";
				}
		};
		Array() : _array(NULL), _size(0)
		{
			std::cout << "Default Constructor of Array has been called." << std::endl;
		}
		Array(unsigned int n) : _size(n)
		{
			std::cout << "Constructor of Array has been called." << std::endl;
			_array = new T[_size];
			std::cout << *_array << std::endl;
		}
		Array(const Array& array) : _size(array._size)
		{
			std::cout << "Copy Constructor of Array has been called." << std::endl;
			_array = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = array._array[i];
		}
		Array& operator = (const Array& array)
		{
			std::cout << "Copy Assignment Operator has been called." << std::endl;
			if (this != &array)
			{
				delete[] _array;
				_size = array._size;
				_array = new T[_size];
				for (unsigned int i = 0; i < _size; i++)
					_array[i] = array._array[i];
			}
			return (*this);
		}
		~Array()
		{
			std::cout << "Destructor of Array has been called." << std::endl;
			delete[] _array;
		}
		unsigned int	size()
		{
			return (_size);
		}
		T&	operator [] (int index)
		{
			if (static_cast<unsigned int>(index) >= _size || index < 0)
				throw Array::OutOfBounds();
			else
				return _array[index];
		}
		const T&	operator [] (int index) const
		{
			if (static_cast<unsigned int>(index) >= _size || index < 0)
				throw Array::OutOfBounds();
			else
				return _array[index];
		}
};

#endif
