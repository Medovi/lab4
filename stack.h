#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

template <typename T> //шаблон
class Stack {
private:
	T *array; //указатель на массив
	int size; //размер стека
	int count; //верхний элемент стека
public:
	Stack():Stack(5){} //конструктор по умолчанию
	Stack(int size_){ //конструктор с параметрами
        if (size_ > 0)
        size = size_;
		else
        size = 5;
		array = new T[size + 1]; //выделение памяти
		for (int i = 0; i <= size; ++i) //заполнение нулями
        array[i] = 0;
		count = -1; //индикатор пустого стека
	}
	Stack(const Stack & p){
		size = p.size;
		count = p.count;
		for (int i = 0; i <= size; ++i){
			array[i] = p.array[i];
		}
	}

	bool Push(T item){ //проталкиваем элементы
		if (count == size-1)
            return false;
        else{
            ++count;
			array[count] = item;
        return true;
		}
	}

	bool Pop(){ //производим выборку
		if (count == -1){
			return false;
		}
		else{
			array[count] = 0;
			--count;
			return true;
		}
	}

	T Top(){ //возвращаем верхний элемент
		if (count == -1){
			return -1;
		}
		else
        return array[count];
	}

	void Clear(){ //очищаем стек (полная выборка)
		for (int i = 0; i < size; ++i)
        array[i] = 0;
		count = -1;
		return;
	}

	bool isEmpty(){ //проверяем стек на пустоту
	    if (count == -1)
        return true;
        else
        return false;
	}

	int Size(){ //возвращает размер стека
		return size;
	}

	Stack & operator=(const Stack &p){
		Stack(this->size = p.size, this->count = p.count);
		for (int i = 0; i <= size; ++i){
            this->array[i] = p.array[i];
		}
		return *this;
	}

	void Print() const{ //выводим стек
		for (int i = size-1; i >= 0; --i){
            cout << " ";
			cout << array[i];
			if(i != 0)
            cout << endl;
		}
		cout << endl << endl;
	}

	~Stack(){ //очищаем память
		delete[]array;
	}
};

#endif //STACK_H_INCLUDED
