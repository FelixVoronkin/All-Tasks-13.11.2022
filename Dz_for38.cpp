#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, c, d;
	cin >> a;
	c = 0;
	d = 0;
	for (int i = 1; i < a + 1; i++) {
		c = i;
		d += pow(i, a - i + 1);
	}
	cout << d;
}