#include <iostream>
#include <vector>
using namespace std;
int findMin(vector<int> a, int n) {
    int min = 10000;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0 && a[i] < min) min = a[i];
    }
    return min;
}
int counter(vector<int> a, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) count++;
    }
    return count;
}
bool check(vector <int> a, int n) {
    int tmp;
    for (int i=0;i<n;i++)
        if (a[i] != 0) {
            tmp = i;
            break;
        }
    for (int i = 0; i < n; i++) {
        if (a[i]!=0 || a[i] != a[tmp]) return false;
    }
    return true;
}
vector<int> solve(vector<int> a, int n) {
    int count = 0;
    int tmp = 0;
    vector<int> b;
    while (!check(a,n)) {
        b.push_back(counter(a, n));
        int tmp = findMin(a, n);
        for (int i = 0; i < n; i++) a[i] -= tmp;
    }
    return b;
}
int main() {
    int n, k;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<int> b;
    b = solve(a, n);
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << endl;
    }
    return 0;
}
