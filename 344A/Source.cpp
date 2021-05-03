// https://codeforces.com/problemset/problem/344/A
// Completed

#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n, buff, numgroups = 1;
	cin >> n;

	vector<int> magnets;
	for (int i = 0; i < n; i++) {
		cin >> buff;
		magnets.push_back(buff);
	}

	if (magnets.size() > 1) {
		for (int i = 1; i < magnets.size(); i++) {
			if (magnets[i] != magnets[i - 1])
				numgroups++;
		}
	}

	cout << numgroups << endl;
	//system("pause");
	return 0;
}