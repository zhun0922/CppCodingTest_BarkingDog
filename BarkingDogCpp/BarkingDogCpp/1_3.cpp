#include <iostream>

using namespace std;

//제곱수인지 체크. 여기서 시간복잡도는 루트 n이다. 이처럼 시간복잡도가 0(루트 N) 처럼 될 수 있음
int func3(int n) {
	for (int i = 1; i * i <= n; i++) {
		if (i * i == n) return 1;
	}
	
	return 0;
}	

int main() {
	cout << func3(756580036);
}