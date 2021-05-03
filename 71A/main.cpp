// https://codeforces.com/problemset/problem/71/A
// Completed

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	int n;
	cin >> n;

	string buff;
	vector<string> words;
	for (int i = 0; i < n; i++) {
		cin >> buff;
		words.push_back(buff);
	}

	for (int i = 0; i < n; i++) {
		if (words[i].length() <= 10)
			cout << words[i] << endl;
		else {
			cout << words[i][0] << words[i].length() - 2 << words[i][words[i].length() - 1] << endl;
		}

	}


	//system("pause");
	return 0;
}