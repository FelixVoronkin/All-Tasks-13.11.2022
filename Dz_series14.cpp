#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int N, K,a;
	cin >> K;
	a = 0;
	cin >> N;
	while (N != 0) {
		if (N < K) a += 1;
		cin >> N;
	}
	cout << a;
}