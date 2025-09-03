#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>
#include <string>

using namespace std;

int n, m;
int graph[102][102];
bool vis[102][102];
int dist[102][102];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1};

int main() {
	cin >> n >> m;
	string input = "";

	for (int i = 0; i < n; i++) {
		cin >> input;
		for (int j = 0; j < m; j++) {
			graph[i][j] = input[j] - '0';
		}
	}
	
	queue<pair<pair<int, int>, int>> Q;
	
	vis[0][0] = true;
	dist[0][0] = 1;
	Q.push({{0,0}, 1});

	while (!Q.empty()) {
		pair<pair<int, int>, int> cur = Q.front();
		Q.pop();

		//n x 와 멀어지지 않는 방향으로 가자
		//[n - cx] [m - cy] 
		//4개를 다돌고 위의 값이 
		for (int i = 0; i < 4; i++) {
			int cx = cur.first.first + dx[i];
			int cy = cur.first.second + dy[i];

			if (cx < 0 || cy < 0 || cx > n || cy > m) continue;
			if (graph[cx][cy] != 1 || vis[cx][cy]) continue;

			int tmpDis = cur.second + 1;
			dist[cx][cy] = tmpDis;
			Q.push({{ cx,cy }, tmpDis});
			vis[cx][cy] = true;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << dist[i][j] << ' ';
		}
		cout << '\n';
	}


	//그래프 완료

	//탐색은 가능한데, 최소의 칸 수를 어떻게 측정할까.
	
}