#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int board[502][502];
bool isVisited[502][502];
int dx[] = { -1,1,0,0 };
int dy[] = { 0, 0, 1, -1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<pair<int, int>> Q;
	isVisited[0][0] = 1;
	Q.push({ 0,0 });
	while (!Q.empty()) {
		int cx = 0;
		int cy = 0;
		for (int i = 0; i < 4; i++) {
			int cx = Q.front().first + dx[i];
			int cy = Q.front().second + dy[i];
		}

		if (cx >= 0 && cy >= 0 && cx < 502 && cy < 502 && !isVisited[cx][cy]
			&& board[cx][cy] == 1) {
			isVisited[cx][cy] = true;
			Q.push({ cx,cy });
		}
		Q.pop();

	}
}