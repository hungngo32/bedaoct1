#include<iostream>
#include<vector>
using namespace std//
int main() {
	int n;
	vector<int> a, b, pos;
	cin >> n;
	a.resize(n + 1);
	b.resize(n + 1);
	pos.resize(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
		pos[b[i]] = i;
	}
	int tmp = 0;
	int count = 0;
	for (int i = 1; i <= n; i++) {
		if (pos[a[i]] > tmp) {
			count++;
			tmp = pos[a[i]];
		}
		else {
			break;
		}
	}
	cout << n - count;
	return 0;
}