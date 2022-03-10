#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
template <typename T>
class Stack {
private:
	int topIdx;
	T* stackPtr;
public:
	Stack(int size);
	~Stack();
	void Push(const T& pushVal);
	T Pop();
	int getTopIdx();
};
template <typename T>
Stack<T>::Stack(int size ) {
	stackPtr = new T[size];
	topIdx = -1;
}
template <typename T>
Stack<T>::~Stack() {
	delete[]stackPtr; stackPtr = NULL;
}
template <typename T>
void Stack<T>::Push(const T& pushVal) {
	topIdx++;
	stackPtr[topIdx] = pushVal;
}
template <typename T>
T Stack<T>::Stack::Pop() {
	return stackPtr[topIdx--];
}
template <typename T>
int Stack<T>::getTopIdx() {
	return topIdx;
}

#endif