// https://codeforces.com/problemset/problem/230/B
//

#include <iostream>
#include <vector>

using namespace std;

int numFactors(unsigned long long int i) {
	int numfactors = 0;

	if (i == 1)
		return 1;
	for (unsigned long long int j = 2; j < i; j++) {
		if (i % j == 0) {
			numfactors++;
		}
	}
	return numfactors + 2;
}

int main(void) {
	int n, buff;
	cin >> n;
	vector<unsigned long long int> nums;

	for (int i = 0; i < n; i++) {
		cin >> buff;
		nums.push_back(buff);
	}

	for (int i = 0; i < nums.size(); i++) {
		if (numFactors(nums[i]) == 3)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}



	//system("pause");
	return 0;
}