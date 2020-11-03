#pragma once
#include <assert.h>
template <class T>
class safe_array
{
private:
	int size;
	T* data;
public:
	safe_array();
	safe_array(int);
	int get_size();
	~safe_array();
	void push(T);
	void pop();
	T& operator[] (int);
	
};


template<class T>
inline safe_array<T>::safe_array()
{
	size = 0;
	data = nullptr;
}

template<class T>
safe_array<T>::safe_array(int _size) :size(_size)
{
	data = new T[size];
}

template<class T>
inline int safe_array<T>::get_size()
{
	return size;
}

template<class T>
safe_array<T>::~safe_array()
{
	delete[] data;
}

template<class T>
void safe_array<T>::push(T elem)
{
	++size;
	T* tmp = new T[size];
	for (int i = 0; i < size - 1; ++i)
		tmp[i] = data[i];
	tmp[size - 1] = elem;
	delete[] data;
	data = tmp;

}

template<class T>
inline void safe_array<T>::pop()
{
	--size;
	T* tmp = new T[size];
	for (int i = 0; i < size; i++)
	{
		tmp[i] = data[i];
	}
	delete[] data;
	data = tmp;

}

template<class T>
T& safe_array<T>::operator[](int i)
{
	assert(i >= 0 && i < size);
	return data[i];
}