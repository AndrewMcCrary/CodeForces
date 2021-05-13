// https://codeforces.com/problemset/problem/1511/E
// 2100
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define WHITE_CHAR 'o'
#define BLACK_CHAR '*'

//Black = 0, Red = 1, Blue = 2
// Red is horizontal, blue is vertical


// max dominoes = total space / 2
// -1 domino if black surrounded by red vertically and blue horizontally

int main(void) {
	int n, m, num_white = 0, num_black = 0;
	cin >> n >> m;

	string buff;
	vector<vector<short>> board;

	for (int i = 0; i < n; i++) {
		getline(cin, buff);

		for (int j = 0; j < m; j++) {
			if (buff[j] == WHITE_CHAR) {
				num_white++;
				board[i].push_back(1);
			}
			else {
				num_black++;
				board[i].push_back(0);
			}
		}
	}






	system("pause");
	return 0;
}