#include<iostream>
using namespace std;
struct Node
{
	Node* next;
	int data;
};
struct List
{
	Node* head;
	Node* tail;
};
void init(List& l);
Node* createNode(int data);
void addHead(List& l, Node* p);
void addTail(List& l, Node* p);
void addMid(List& l, Node* p, int n);
void deleteHead(List& l);
void deleteTail(List& l);
void print(List l);