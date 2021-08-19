#include"singlelyLL.h"
void init(List& l) {
	l.head = l.tail = NULL;
}
Node* createNode(int data) {
	Node* p = new Node;
	p->data = data;
	p->next = NULL;
	return p;
}
void addHead(List& l, Node* p) {
	if (l.head == NULL) {
		l.head = p;
		l.tail = p;
	}
	else {
		p->next = l.head;
		l.head = p;
	}
}
void addTail(List& l, Node* p) {
	if (l.head == NULL) {
		l.head = p;
		l.tail = p;
	}
	else {
		l.tail->next = p;
		l.tail = p;
	}
}
void addMid(List& l, Node* p, int n) {
	int count = 0;
	for (Node* g = l.head; g != NULL; g = g->next) {
		count++;
		if (count==n-1){
			p->next = g->next;
			g->next = p;
			return;
		}
	}
}
void deleteHead(List& l) {
	Node* g = l.head;
	l.head = l.head->next;
	g = NULL;
	delete g;
}
void deleteTail(List& l) {
	Node* h = NULL;
	for (Node* g = l.head; g != NULL; g = g->next) {
		if (g->next == l.tail) {
			h = g;
		}else
			continue;
	}
	Node* k = l.tail;
	delete k;
	k = NULL;
	l.tail = h;
}
void print(List l) {
	for (Node* g = l.head; g != NULL; g = g->next) {
		cout << g->data << " ";
	}
}