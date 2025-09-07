#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;


int dis[100002];

int n, k, result;

//1차원 배열에 BFS를 사용하는 문제이고 내가 풀어본  틀린 코드
//나중에 왜 이렇게 접근했는지 리뷰위해 남겨놓음 

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	//수빈이 위치 1.좌우로 이동
	//2.순간이동 1초 후에 2*X만큼

	fill(dis, dis + 100002, -1);

	queue<int> Q;
	cin >> n >> k;

	Q.push(n);
	dis[n] = 0;

	while (!Q.empty()) { //근데 답에 도달하면 return으로 끊어줄거임
		int nx = Q.front();
		Q.pop();

		for (int i = 0; i < 3; i++) {
			int cx = 0;
			if (i == 0) {
				cx = nx + 1;
			}
			else if (i == 1) {
				cx = nx - 1;
			}
			else if (i == 2){
				cx = nx * 2;
			}

			if (cx < 0 || cx > 100001) continue;
			if (cx == k) {
				result = 0;
				int a = dis[cx - 1];
				result = a;
				int b = dis[cx + 1];
				if (b != -1 && b < result) {
					result = b;
				}
				int c = dis[cx / 2];
				if (c != -1 && c < result) {
					result = c;
				}
				cout << result + 1;
				return 0;
			}
			if (dis[nx] != -1 && dis[cx] < dis[nx]) {
				dis[cx] = dis[nx] + 1;
			}
			Q.push(cx);

			/*for (int i = 0; i <= k+1; i++) {
				cout << '[' << i << ']' << ": " << dis[i] << "  ";
			}
			cout << endl;*/
		}
	}
}