#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
    private:
        T *_arr;
        unsigned int _size;

    public:
        Array();
        Array(const Array &copy);
        Array& operator=(const Array *other);
        ~Array();
};
#endif