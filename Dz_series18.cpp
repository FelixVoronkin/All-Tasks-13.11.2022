#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int N, K, temp, temp1, a;
	a = 0;
	int mas[999];
	cin >> N;
	cin >> temp1;
	mas[0] = temp1;
	for (int i = 0; i < N - 1; i++) {
		cin >> temp;
		if (temp != temp1) {
			a += 1;
			mas[a] = temp;
		}
		temp1 = temp;
	}
	for (int i = 0; i < a+1; i++) {
		cout << mas[i] << ' ';
	}
}