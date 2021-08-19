#include<iostream>
using namespace std;
void print(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void bubbleSort(int a[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = n - 1; j >= 1; j--) {
			if (a[j] < a[j - 1]) {
				swap(a[j], a[j - 1]);
			}
		}
	}
	cout << "Bubble Sort: ";
	print(a, n);
	cout << endl;
}
void quickSort(int a[], int n) {
	int key = n / 2;
	
}
int main() {
	int a[] = { 8,1,4,6,4,0,43,65,32 };
	int n = sizeof(a) / sizeof(int);
	bubbleSort(a, n);
	return 0;
}