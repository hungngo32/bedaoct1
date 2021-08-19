#include<iostream>
using namespace std;
const int capa = 3;
struct Stack
{
	int capacity;
	int top;
	int* a;
};
void init(Stack& s) {
	s.capacity = capa;
	s.a = new int[s.capacity];
	s.top = -1;
}
bool isEmpty(Stack& s) {
	if (s.top == -1) {
		return true;
	} 
	return false;
}
bool isFull(Stack s) {
	if (s.top == s.capacity - 1) return true;
	return false;
}
void get(Stack s) {
	if (isEmpty(s)) {
		cout << "Stack is empty";
	} else 
	cout << "Top: " << s.a[s.top];
}
void push(Stack& s,int key) {
	if (isFull(s)) {
		cout << "Stack is full";
	}
	else {
		s.top++;
		s.a[s.top] = key;
	}
}
void pop(Stack& s) {
	if (isEmpty(s)) {
		cout << "\nStack is empty";
	}
	else {
		s.top--;
	}
}
void print(Stack s) {
	for (int i = 0; i <= s.top; i++) {
		cout << s.a[i] << " ";
	}
}
int main() {
	Stack s;
	init(s);
	push(s, 1);
	push(s, 2);
	print(s);
	return 0;
}