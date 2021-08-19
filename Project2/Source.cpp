#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool solve(string s) {
	vector <int> a;
	vector <int> b;
	string st = "";
	for (int i = s.size() - 1; i >= 0; i--)
		st += s[i];
	//for (char i = 'a'; i <= 'z'; i++) a[i] = 0;
	for (int i = 0; i < s.size()-1; i++) {
		a.push_back(abs(s[i + 1] - s[i]));
	}
	for (int i = 0; i < st.size() - 1; i++) {
		b.push_back(abs(st[i + 1] - st[i]));
	}
	for (int i = 0; i < a.size(); i++) {
		if (a[i] != b[i]) return false;
	}
	return true;
	//else return false;
}
int main() {
	vector <string> s;
	string st;
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		getline(cin, st);
		s.push_back(st);
	}
	for (int i = 0; i < n; i++) {
		if (solve(s[i])) cout << "Funny"<<endl;
		else
		{
			cout << "Not Funny" << endl;
		}
	}
	return 0;
}