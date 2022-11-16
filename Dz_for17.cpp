#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, c, d, b;
	cin >> a >> b;
	c = 0;
	d = 1;
	for (int i = 1; i < b + 1; i++) {
		c = i;
		d += pow(a,i);
	}
	cout << d;
}