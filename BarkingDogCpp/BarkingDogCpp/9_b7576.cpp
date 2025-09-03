#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int dx[] = { 1,-1,0,0 };
int dy[] = { 0,0,1,-1 };

int graph[1002][1002];

int n, m, result;

//시작점이 여러개야

//1을찾는 BFS를 먼저 수행?


//아니면
//BFS 1번 딱 수행 이후 


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	int input = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> input;
			graph[i][j] = input;
		}
	}

	queue<pair<int, int>> Q;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (graph[i][j]) {
				Q.push({ i,j });
			}
		}
	}

	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();

		for (int i = 0; i < 4; i++) {
			int cx = cur.first + dx[i];
			int cy = cur.second + dy[i];

			if (cx < 0 || cy < 0 || cx > m || cy > n) continue;
			if (graph[cx][cy] == 1 || graph[cx][cy] == -1) continue;

			graph[cx][cy] = 1;
			Q.push({ cx,cy });
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cout << graph[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	cout << result;
}