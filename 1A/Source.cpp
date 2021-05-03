// https://codeforces.com/problemset/problem/1/A
// For some reason this does not work

#include <iostream>

using namespace std;

int main(void) {

	unsigned long long int n, m, a;
	cin >> n >> m >> a;

	cout << (n % a == 0 ? n / a : n / a + 1) * (m % a == 0 ? m / a : m / a + 1);

	//system("pause");
	return 0;
}