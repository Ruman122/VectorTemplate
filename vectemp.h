#ifndef VECTEMP_H
#define VECTEMP_H

#include<iostream>

template<typename T>
class VecTemp
{
private:
	int size;
	int counter=0;
	int length;
	T* dynamicArr;
public:
	VecTemp(int size);
	void push(T element);
	bool is_empty();
	T see_size();
	~VecTemp();
};

template<typename T>
VecTemp<T>::VecTemp(int size)
{
	this-> size = size;
	length=size;
	dynamicArr = new T[size];
}
template<typename T>
void VecTemp<T>::push(T element)
{
	if(counter<size)
	{
		dynamicArr[counter] = element;
		counter++;
	}
	else
	{
		std::cout<<"This structure is full!!"<<std::endl;
	}
}
template<typename T>
bool VecTemp<T>::is_empty()
{
	if(length==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
template <typename T>
T VecTemp<T>::see_size()
{
	return length;
}
template<typename T>
VecTemp<T>::~VecTemp()
{
	delete[] dynamicArr;
}


#endif