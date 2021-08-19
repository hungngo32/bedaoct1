#pragma once
#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
	Node* prev;
};
struct List
{
	Node* head;
	Node* tail;
};