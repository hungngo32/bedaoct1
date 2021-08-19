#include"Header1.h"
void init(List& l) {
	l.head = l.tail = NULL;
}
Node* createNode() {
	int n;
	cout << "\nNhap n: ";
	cin >> n;
	Node* p = new Node;
	p->data = n;
	p->next = NULL;
	p->prev = NULL;
	return p;
}
void addFirst(List&l,Node* p) {
	if (l.head == NULL) {
		l.head = p;
		l.tail = p;
	}
	else {

		p->next = l.head;
		l.head->prev = p;
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
		p->prev = l.tail;
		l.tail = p;
	}
}
void print(List l) {
	for (Node* g = l.head; g != NULL; g = g->next) {
		cout << g->data << " ";
	}
}
int main() {
	List l;
	init(l);
	Node* p = createNode();
	addFirst(l,p);
	Node* h = createNode();
	addFirst(l,h);
	Node* q = createNode();
	addTail(l,q);
	print(l);
	return 0;
}