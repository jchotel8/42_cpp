 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 05:54:59 by jchotel           #+#    #+#             */
/*   Updated: 2020/03/12 08:01:05 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
#include <iostream>
#include <string>

template <typename T> class Array
{
    public:
    Array<T>(void)
    {
    	_size = 0;
    	_array = NULL;
    }
    Array<T>(unsigned int size)
    {
    	_size = size;
    	_array = new T[size];
    }
    Array<T>(const Array<T> &a)
    {
    	*this = a;
    }
    Array<T>& operator=(const Array<T> &a)
    {
    	delete (_array);
		_size = a._size;
		_array = new T[_size];

		for (unsigned int i = 0; i < _size; i++)
			_array[i] = a._array[i];
		return (*this);
    }
    ~Array<T>(void)
    {
    	delete (_array);
    }

    //GETTERS
    unsigned int size()
    {
    	return (_size);
    }
    T& operator[](unsigned int i) {
		if (i >= _size) {
			throw OutOfRangeException();
		}
		return _array[i];
	}
    //SETTERS
    //OTHERS


    class OutOfRangeException : public std::exception
	{
    	public:
	        OutOfRangeException()
	        {};
	        OutOfRangeException(const OutOfRangeException &m)
	        {
	        	*this = m;
	        }
	        OutOfRangeException& operator=(const OutOfRangeException &m)
	        {
	        	return(*this);
	        }
	        ~OutOfRangeException(void) throw()
	        {}
	        char const *what(void) const throw()
	        {
	        	return("Out of range exception");
	   		}
	};

    private:
    T 				*_array;
    unsigned int 	_size;
};

#endif


