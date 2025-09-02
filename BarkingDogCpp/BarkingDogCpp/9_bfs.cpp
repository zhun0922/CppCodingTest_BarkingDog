#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>

using namespace std;

int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };
int n = 7, m = 10;

int board[502][502];
bool isVisited[502][502];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<pair<int, int>> Q;
	isVisited[0][0] = true;
	Q.push({ 0,0 });

	while (!Q.empty()) {
		pair<int, int> cur = Q.front(); 
		Q.pop();
		cout << '(' << cur.first << ", " << cur.second << ") ->";
		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (isVisited[nx][ny] || board[nx][ny] != 1) continue;
			isVisited[nx][ny] = 1;
			Q.push({ nx,ny });
		}
	}
}