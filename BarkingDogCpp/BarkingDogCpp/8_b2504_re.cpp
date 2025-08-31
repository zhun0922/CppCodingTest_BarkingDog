#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);

	int sum = 0;
	int mul = 1;

	//2 * 2 
	// 4


	string input = "";
	stack<char> s;
	cin >> input;
	for (int i = 0; input.size(); i++) {
		if (input[i] == '(') {
			mul *= 2;
		}
		else if (input[i] == '[') {
			mul *= 3;
		}
		else if (input[i] == ')') {
			if (s.empty() || s.top() != '('){
				return 0;
			}
			if (input[i - 1] == '(') {
				sum += mul;
				s.pop();
				mul /= 2;
			}
		}
		else { //input[i] == ']'
			if (s.empty() || s.top() != '[') {
				return 0;
			}
			if (input[i - 1] == '[') {
				sum += mul;
				s.pop();
				mul /= 3;
			}
		}
		if (s.empty()) cout << sum;
		else return 0;
	}
}

/*
boj 10799 쇠 막대기 문제의 아이디어와 비슷하게 붙어있는 () 혹은 []를 만나면
sum에 점수를 더해줌. () 혹은 []이 몇 점인가는 중첩된 소괄호/대괄호의 곱으로
계산 가능하고 이는 변수 num에 저장이 됨.
*/