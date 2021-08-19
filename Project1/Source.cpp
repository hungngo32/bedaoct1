#include<iostream>
#include<conio.h>
#include <vector>
using namespace std;
int solve(string s) {
	vector<int> a;
	a.resize(s.size() + 1);
	a[0] = 1;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '<') a[i + 1] = a[i] + 1;
		if (s[i] == '=') a[i+1]=a[i];
		if (s[i] == '>') a[i + 1] = a[i] - 1;
	}
	int max = a[0];
	for (int i = 0; i <= a.size()-1; i++) {
		if (a[i] > max) max = a[i];
	}
	return max;
}
int main() {
	int n;
	cin >> n;
	vector<string> s;
	string st;
	for (int i = 0; i < n; i++) {
		cin >> st;
		s.push_back(st);
	}
	for (int i = 0; i < n; i++) {
		cout << solve(s[i])<<endl;
	}
	return 0;
}