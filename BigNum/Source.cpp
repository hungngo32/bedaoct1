#include<iostream>
using namespace std;
void compare(string a, string b) {
	while (a.size() != b.size()) {
		if (a.size() > b.size()) {
			b = '0' + b;
		}
		else {
			a = '0' + a;
		}
	}
	if (strcmp(a.c_str(), b.c_str())==1) {
		cout << "a>b";
	}
	else if (strcmp(a.c_str(), b.c_str()) == 0) {
		cout << "a=b";
	}
	else {
		cout << "a<b";
	}
}
string add(string a, string b) {
	string c = "";
	int carry = 0;
	int tmp = 0;
	while (a.size() < b.size()) a = '0' + a;
	while (a.size() > b.size()) b = '0' + b;
	for (int i = a.size() - 1; i >= 0; i--) {
		char x = (a[i] - '0') + (b[i] - '0');
		tmp = (int)x % 10;
		c = (char)(tmp + carry + 48) + c;
		if (x >= 10) {
			carry = x / 10;
		}
		else
		{
			carry = 0;
		}
	}
	if (carry > 0) {
		c = (char)(carry+48) + c;
		//cout << carry << endl;
	}
	return c;
}
string sub(string a, string b) {
	string c = "";
	int borrow = 0;
	int tmp = 0;
	while (a.size() < b.size()) a = '0' + a;
	while (a.size() > b.size()) b = '0' + b;
	for (int i = a.size() - 1; i >= 0; i--) {
		char x = (a[i] - '0') - (b[i] - '0');

		if ((int)(x) < 0) {
			c = (char)(x + 10 + 48 + borrow) + c;
			borrow = -1;
		}
		else {
			c = (char)(x + 48) + c;
		}


	}
	return c;
}
int main() {
	string a = "1111111111";
	string b = "9999999999";
	compare(a, b);
	cout << endl;
	cout << add(a, b);
	cout << endl;
	cout << sub(b, a);
	return 0;
}