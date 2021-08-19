#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
struct List
{
	Node* head;
	Node* tail;
};
void init(List& l) {
	l.head = l.tail = NULL;
}
Node* createNode(int data) {
	Node* p = new Node;
	p->data = data;
	p->next = NULL;
	return p;
}
void addTail(List& l,Node*p) {
	if (l.head == NULL) {
		l.head = l.tail = p;
	}
	else {
		l.tail->next = p;
		l.tail = p;
	}

}
void print(List l) {
	for (Node* g = l.head; g != NULL; g = g->next) {
		cout << g->data << " ";
	}
}
void reverse(List& l) {
	Node* cur = l.head;
	Node* after = cur->next;
	Node* prev = NULL;
	while (after!=NULL)
	{
		cur->next = prev;
		prev = cur;
		cur = after;
		after = after->next;
	}
	cur->next = prev;
	l.head = cur;
}
void addOne(List& l) {
	int carry=0;
	for (Node* g = l.head; g != NULL; g=g->next) {
		if (g->data == l.head->data) {
			int tmp = g->data + 1;
			if (tmp == 10) {
				carry = tmp / 10;
				g->data = 0;
			}
		}
		else {
			int tmp = g->data + carry;
			carry = (tmp) / 10;
			g->data =(tmp)%10;
		}
	}
}
int main() {
	List l;
	init(l);
	Node* p = createNode(1);
	addTail(l,p);
	Node* p2 = createNode(9);
	addTail(l, p2);
	Node* p3 = createNode(9);
	addTail(l,p3);
	Node* p4 = createNode(9);
	addTail(l, p4);
	print(l);
	cout << "\n";
	reverse(l);
	print(l);
	cout << "\n";
	addOne(l);
	reverse(l);

	print(l);
	return 0;
}