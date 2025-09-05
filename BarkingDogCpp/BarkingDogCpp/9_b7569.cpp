#include <iostream>
#include <algorithm>
#include <queue>
#include <tuple>

using namespace std;

int n, m, l, result;
int dx[] = { -1, 1, 0, 0, 0, 0 };
int dy[] = { 0,0,1,-1, 0, 0 };
int dz[] = { 0,0,0,0,1,-1 };

int graph[102][102][102];
int dis[102][102][102];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> l;

	int input = 0;

	queue<tuple<int, int, int>> Q; 
	
	for (int k = 0; k < l; k++) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				cin >> input;
				if (input == 1) {
					Q.push(make_tuple(i, j, k));
				}
				graph[i][j][k] = input;
			}
		}
	}

	while (!Q.empty()) {
		tuple<int, int, int> cur = Q.front();
		Q.pop();

		for (int i = 0; i < 6; i++) {
			int cx = get<0>(cur) + dx[i];
			int cy = get<1>(cur) + dy[i];
			int cz = get<2>(cur) + dz[i];

			if (cx < 0 || cy < 0 || cz < 0 || cx >= m || cy >= n || cz >= l) continue;
			if (graph[cx][cy][cz] == 1 || graph[cx][cy][cz] == -1) continue;
			graph[cx][cy][cz] = 1;
			dis[cx][cy][cz] = dis[get<0>(cur)][get<1>(cur)][get<2>(cur)] + 1;
			Q.push(make_tuple(cx, cy, cz));
		}

	}

	for (int k = 0; k < l; k++) {
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (graph[i][j][k] == 0) {
					cout << -1;
					return 0;
				}
				result = max(result, dis[i][j][k]);
			}
		}
	}
	cout << result;
}