#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int n, k, result;
int dis[100002];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	
	fill(dis, dis + 100002, -1);
	queue<int> Q;
	Q.push(n);
	dis[n] = 0;

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();
		if (cur == k) {
			cout << dis[cur];
			return 0;
		}
		for (int i = 0; i < 3; i++) {
			int cx = 0;
			if (i == 0) {
				cx = cur + 1;
			}
			else if (i == 1) {
				cx = cur - 1;
			}
			else if (i == 2) {
				cx = cur * 2;
			}

			if (cx < 0 || cx > 100000) continue;
			if (dis[cx] != -1) continue;

			Q.push(cx);
			dis[cx] = dis[cur] + 1;
		}
	}

}