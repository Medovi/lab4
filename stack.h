#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

template <typename T> 
class Stack {
private:
	T *array; 
	int size; 
	int count; 
public:
	Stack():Stack(5){}
	Stack(int size_){ 
        if (size_ > 0)
        size = size_;
		else
        size = 5;
		array = new T[size + 1]; 
		for (int i = 0; i <= size; ++i) 
        array[i] = 0;
		count = -1;
	}
	Stack(const Stack & p){
		size = p.size;
		count = p.count;
		for (int i = 0; i <= size; ++i){
			array[i] = p.array[i];
		}
	}

	bool Push(T item){ 
		if (count == size-1)
            return false;
        else{
            ++count;
			array[count] = item;
        return true;
		}
	}

	bool Pop(){ 
		if (count == -1){
			return false;
		}
		else{
			array[count] = 0;
			--count;
			return true;
		}
	}

	T Top(){ 
		if (count == -1){
			return -1;
		}
		else
        return array[count];
	}

	void Clear(){ 
		for (int i = 0; i < size; ++i)
        array[i] = 0;
		count = -1;
		return;
	}

	bool isEmpty(){ 
	    if (count == -1)
        return true;
        else
        return false;
	}

	int Size(){
		return size;
	}

	Stack & operator=(const Stack &p){
		Stack(this->size = p.size, this->count = p.count);
		for (int i = 0; i <= size; ++i){
            this->array[i] = p.array[i];
		}
		return *this;
	}

	void Print() const{ 
		for (int i = size-1; i >= 0; --i){
            cout << " ";
			cout << array[i];
			if(i != 0)
            cout << endl;
		}
		cout << endl << endl;
	}

	~Stack(){ 
		delete[]array;
	}
};

#endif //STACK_H_INCLUDED
