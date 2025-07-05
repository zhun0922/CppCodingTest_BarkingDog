#include <iostream>

using namespace std;

//복잡도는 2의 k승이니까 O(log N)이다

//내가푼
//int func4(int n) {
//	int mul2 = 1; 
//	for (int i = 0; mul2 <= n; i++) {
//		mul2 *= 2;
//	}
//	return mul2 / 2;
//}

//정답
int func4(int n) {
	int val = 1;
	while (val * 2 <= n) {
		val *= 2;
	}
	return val;
}

int main() {
	cout << func4(97615282);
}