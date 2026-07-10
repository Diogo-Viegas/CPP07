#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
    private:
        T *_elements;
        unsigned int _size;

    public:
        Array() : _elemnents(NULL), _size(0){}
        // 2. Construction with an unsigned int n: Creates an array of n elements initialized by default.
    // Note: Using `new T[n]()` ensures value-initialization (e.g., ints
        Array(unsigned int n) : _size(n)
        {
            if(size > 0)
            {
                _elements = new T[size]();
            }
            else
            {
                _elements = NULL;
            }
        }
        Array(const Array &copy)
        {
            if(_size > 0)
            {
                _elements = T[_size];
                for(unsigned int = 0; i < _size;i++)
                {
                    _elements[i] = other._elements[i]; 
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
                delete[] _elements
            _size = other._size;
            if(_size > 0)
            {
                _elements = T[_size];
                for(unsigned int i = 0; i < _size; i++)
                {
                    _elements[i] = other->_elements[i];
                }
            }
            else
            {
                _elements = NULL;
            }
            return *this
        }
        ~Array()
        {
            delete[] _elements;
        }
        
};
#endif