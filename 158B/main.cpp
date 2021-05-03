// https://codeforces.com/problemset/problem/158/B
// Completed

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(void) {
	int n, buff, taxis = 0;
	cin >> n;

	vector<int> kids;

	for (int i = 0; i < n; i++) {
		cin >> buff;
		kids.push_back(buff);
	}

	buff = 0;
	sort(kids.begin(), kids.end());
	
	for (int i = kids.size() - 1; i > 0; i--) {
		if (kids[i] != 4)
			break;
		taxis++;
		kids.erase(kids.begin() + i);
	}

	for (int i = kids.size() - 1; i > 0; i--) {
		if (kids[i] != 3)
			break;
		
		if (kids[0] == 1)
		{
			taxis++;
			kids.erase(kids.begin() + i);
			kids.erase(kids.begin());
			i--;
		}
		else {
			taxis++;
			kids.erase(kids.begin() + i);
		}
	}

	buff = accumulate(kids.begin(), kids.end(), 0);
	taxis += (int)ceil((double)buff / 4);

	cout << taxis << endl;
	//system("pause");
	return 0;
}
