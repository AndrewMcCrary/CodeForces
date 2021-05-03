// https://codeforces.com/problemset/problem/4/A
// Completed

#include <iostream>

int main(void) {
	int n;
	std::cin >> n;
	if (n % 2 == 0 && n > 2)
		std::cout << "YES";
	else
		std::cout << "NO";
	return 0;
}