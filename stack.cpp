#include "stack.h"

template <typename T>
Stack<T>::Stack(){
    Stack = 5;
}

template <typename T>
Stack<T>::Stack(int size_){
    if (size_ > 0) {
			size = size_;
		} else {
			size = 5;
		}
		array = new T[size+1]; //выделение памяти
		for (int i = 0; i <= size; ++i) //заполнение нулями
			array[i] = 0;
		count = -1; //индикатор пустого стека
//    if (!SetSize(size_))
//    size = 7;
//    array = new T[size+1]; //выделение памяти
//    for (int i = 0; i <= size; ++i) //заполнение нулями
//    array[i] = 0;
//    count = -1; //индикатор пустого стека
}

template <typename T>
Stack<T>::Stack(const Stack &p){
    size = p.size;
    count = p.count;
    for (int i = 0; i <= size; ++i){
        array[i] = p.array[i];
        }
}

template <typename T>
void Stack<T>::Push(T item){
    if (count == size-1){
        cout << "Stack переполнен!" << endl;
		}else{
        ++count;
        array[count] = item;
		}
    return;
}

template <typename T>
T Stack<T>::Pop(){
    if (count == -1){
        cout << "Stack пуст!" << endl;
        return;
		}else{
        array[count] = 0;
        --count;
    }
}

template <typename T>
T Stack<T>::Top(){
    if (count == -1){
        cout << "Stack пуст!" << endl;
        return -1;
		}else{
        return array[count];
    }
}

template <typename T>
void Stack<T>::Clear(){
    for (int i = 0; i < size; ++i)
    array[i] = 0;
    count = -1;
    return;
}

template <typename T>
bool Stack<T>::isEmpty(){
    if (count == -1)
    return true;
    else;
    return false;
}

template <typename T>
int Stack<T>::Size() { //возвращает размер стека
		return size;
	}

//template <typename T>
//bool Stack<T>::SetSize(int size_){
//    if (size_ < 0)
//    return false;
//    else
//    size = size_;
//    return true;
//}
//
//template <typename T>
//int Stack<T>::GetSize() const{
//    return size;
}
template <typename T>
Stack<T> & Stack<T>::operator=(const Stack &p){
    Stack(this->size = p.size, this->count = p.count);
    for (int i = 0; i <= size; ++i){
        this->array[i] = p.array[i];
		}
    return *this;
}

template <typename T>
Stack<T>::~Stack(){
    //cout << "cls" << endl;
    delete[]array;
}

template <typename T>
void Stack<T>::Print() const{
    for (int i = size-1; i >= 0; --i){
        cout << "|\t" << array[i] << "\t|" << endl;
		}
}

