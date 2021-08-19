#include"singlelyLL.h"
int main() {

	List l;
	init(l);
	Node* p = createNode(1);
	addHead(l, p);
	print(l);
	return 0;
}