// https://codeforces.com/problemset/problem/1511/D
// 1600
//

#include <iostream>
#include <string>
#include <vector>
#include <string.h>

#define ll unsigned long long

using namespace std;

int main(void) {
	string ALPHA = *new string("abcdefghijklmnopqrstuvwxyz");

	ll n, k;
	cin >> n >> k;

	vector<vector<string>> pairs;
	string usable = ALPHA.substr(0, k);
	string answer;

	for (ll i = 0; i < k; i++) {
			pairs.push_back(vector<string>());
		for (ll j = 0; j < k; j++) {
			pairs[i].push_back(string(1, usable[i]) + usable[j]);
		}
	}

	if (k == 1) {
		answer = "a";
	}
	else if (k == 2) {
		answer = "aabba";
	}
	else {
		for (ll i = 0; i < k; i++) {
			for (ll j = 0; j <= i; j++) {
				if (i == j)
					answer += usable[i];
				else {
					answer += pairs[j][i];
				}
			}
		}
	}

	string finish;
	for (ll i = 0; i < n; i++) {
		finish += answer[i % answer.length()];
	}

	cout << finish << endl;
	//system("pause");
	return 0;
}
