#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
template <typename T>
class Array
{
    private:
        T *_elements;
        unsigned int _size;

    public:
        Array() : _elements(NULL), _size(0){}
        // 2. Construction with an unsigned int n: Creates an array of n elements initialized by default.
    // Note: Using `new T[n]()` ensures value-initialization (e.g., ints
        Array(unsigned int n) : _size(n)
        {
            if(_size > 0)
            {
                _elements = new T[_size]();
            }
            else
            {
                _elements = NULL;
            }
        }
        Array(const Array &copy) : _size(copy._size)
        {
            if(_size > 0)
            {
                _elements = new T[_size];
                for(unsigned int i = 0; i < _size;i++)
                {
                    _elements[i] = copy._elements[i]; 
                }
            }
            else
            {
                _elements = NULL;
            }
       
        }
        Array& operator=(const Array *other)
        {
            if(this != &other)
                delete[] _elements;
            _size = other->_size;
            if(_size > 0)
            {
                _elements = new T[_size];
                for(unsigned int i = 0; i < _size; i++)
                {
                    _elements[i] = other->_elements[i];
                }
            }
            else
            {
                _elements = NULL;
            }
            return *this;
        }
        unsigned int size() const
        {
            return _size;
        }

        T& operator[](unsigned int index)
        {
            if(index >= _size)
                throw std::out_of_range("Index out of bounds");
            return _elements[index];
        }

        const T& operator[](unsigned int index) const
        {
            if(index >= _size)
                throw std::out_of_range("Index out of bounds");
            return _elements[index];
        }

        ~Array()
        {
            delete[] _elements;
        }
        
};
#endif