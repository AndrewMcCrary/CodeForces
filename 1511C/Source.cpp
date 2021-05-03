// https://codeforces.com/problemset/problem/1511/C
// Completed

#include <iostream>
#include <vector>
#include <chrono>

using namespace std;
using namespace std::chrono;

void movetofront(vector<int>& vec, int i) {
	vec.insert(vec.begin(), vec[i]);
	vec.erase(vec.begin() + i + 1);
}

int main(void) {
	int n, q;
	int buff;
	cin >> n >> q;

	int highest[51];
	for (int i = 0; i < sizeof(highest)/sizeof(highest[0]); i++) {
		highest[i] = n + 1;
	}

	vector<int> queries;
	for (int i = 0; i < n; i++) {
		cin >> buff;

		if (highest[buff] > i) {
			highest[buff] = i;
		}
	}

	for (int i = 0; i < q; i++) {
		cin >> buff;
		queries.push_back(buff);
	}

	
	auto start = high_resolution_clock::now();
	for (int i = 0; i < queries.size(); i++) {
		std::cout << highest[queries[i]] + 1 << " ";
		for (int j = 0; j < sizeof(highest)/sizeof(highest[0]); j++) {
			if (highest[j] < highest[queries[i]])
				highest[j]++;
		}
		highest[queries[i]] = 0;
	}
	auto finish = high_resolution_clock::now();
	auto duration = duration_cast<milliseconds>(finish - start);
	cout << duration.count() << endl;

	cout << endl;
	//system("pause");
	return 0;
}