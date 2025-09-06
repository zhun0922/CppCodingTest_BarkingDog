#include <iostream>
#include <algorithm>
#include <queue>
#include <string>
#include <utility>

using namespace std;

int r, c, result = 200000000;
int dx[] = { -1,1, 0,0 };
int dy[] = { 0,0,1,-1 };


pair<int, int> F;
pair<int, int> J;

char graph[1001][1001];
int dis_F[1001][1001];
bool vis_F[1001][1001];
int dis_J[1001][1001];
bool vis_J[1001][1001];
int dis_Route[1001][1001];
bool vis_Route[1001][1001];

//1. 불의 DIS먼저 구하기
//2. J의 DIS를 구하기
//3. J부터 시작하는 탈출루트 DIS구하기

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> r >> c;
	char input = '\0';

	queue<pair<int, int>> FQ;
	queue<pair<int, int>> JQ;
	queue<pair<int, int>> RQ;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> input;
			dis_Route[i][j] = -1;
			//dis_J[i][j] = -1;
			//is_F[i][j] = -1;
			graph[i][j] = input;

			if (input == 'F') {
				FQ.push({ i,j });
				vis_F[i][j] = true;
				//dis_F[i][j] = 0;
			}
			if (input == 'J') {
				JQ.push({ i,j });
				RQ.push({ i,j });
				vis_J[i][j] = true;
				dis_J[i][j] = 0;
				vis_Route[i][j] = true;
				//dis_Route[i][j] = 0;
			}
			
		}
	}

	while (!FQ.empty()) {
		pair<int, int> cur = FQ.front();
		FQ.pop();
		for (int i = 0; i < 4; i++) {
			int cx = cur.first + dx[i];
			int cy = cur.second + dy[i];

			if (cx < 0 || cy < 0 || cx >= r || cy >= c) continue;
			if (graph[cx][cy] == 'J' || vis_F[cx][cy] || graph[cx][cy] == '#') continue;

			dis_F[cx][cy] = dis_F[cur.first][cur.second] + 1;
			vis_F[cx][cy] = true;
			FQ.push({ cx,cy });
		}
	}

	while (!JQ.empty()) {
		pair<int, int> cur = JQ.front();
		JQ.pop();
		for (int i = 0; i < 4; i++) {
			int cx = cur.first + dx[i];
			int cy = cur.second + dy[i];

			if (cx < 0 || cy < 0 || cx >= r || cy >= c) continue;
			if (graph[cx][cy] == 'F' || vis_J[cx][cy] || graph[cx][cy] == '#') continue;

			dis_J[cx][cy] = dis_J[cur.first][cur.second] + 1;
			vis_J[cx][cy] = true;
			JQ.push({ cx,cy });
		}
	}

	while (!RQ.empty()) {
		pair<int, int> cur = RQ.front();
		RQ.pop();
		for (int i = 0; i < 4; i++) {
			int cx = cur.first + dx[i];
			int cy = cur.second + dy[i];

			if (cx < 0 || cy < 0 || cx >= r || cy >= c) continue;
			if (vis_Route[cx][cy] || dis_J[cx][cy] >= dis_F[cx][cy]) continue;

			dis_Route[cx][cy] = dis_Route[cur.first][cur.second] + 1;
			vis_Route[cx][cy] = true;
			RQ.push({ cx,cy });
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (i == 0 || i == r - 1 || j == 0 || j == c - 1) {
				if (dis_Route[i][j] >= 0) {			
					result = min(dis_Route[i][j], result);
				}
			}
		}
	}
	if (result == 200000000) {
		cout << "IMPOSSIBLE";
	}
	else {
		cout << ++result;
	}
	
}

