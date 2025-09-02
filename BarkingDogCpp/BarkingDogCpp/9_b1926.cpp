#include <iostream>
#include <utility>
#include <algorithm>
#include <queue>


using namespace std;

//
int n, m;
int board[502][502];
bool vis[502][502];

int num, width;


int dx[] = {1, -1, 0, 0};
int dy[] = { 0, 0, 1, -1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int input = 0;
			cin >> input;
			board[i][j] = input;
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] != 1 || vis[i][j]) continue;

			queue<pair<int, int>> Q;
			num++;
			vis[i][j] = true;
			Q.push({ i,j });

			int tmpWidth = 0;

			while (!Q.empty()) {
				pair<int, int> cur = Q.front();
				Q.pop(); 
				tmpWidth++;
				for (int k = 0; k < 4; k++) {
					int nx = cur.first + dx[k];
					int ny = cur.second + dy[k];

					if (nx < 0 || nx > n || ny < 0 || ny > m) continue;
					if (board[nx][ny] != 1 || vis[nx][ny]) continue;

					vis[nx][ny] = true;
					Q.push({ nx, ny });
				}
			}
			if (width < tmpWidth) width = tmpWidth;

		}

	}
	cout << num << '\n' << width;
}
