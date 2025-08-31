#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

string input;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// 안정적으로 바꾸는데 필요한 최소 연산의 수
	// 안될조건을 바꿔주는
	// 안될조건
	// 1. } 가 나오는데 만약 empty 이거나 top이 { 가 아닐 때 
	// -> 문자열을 안정적으로 바꾸는데 필요한 최소한의 연산 수 ++ 해주고
	// }대신 {를 스택에 push해준다
	// 2. 문자열 순회를 다 거친 후 스택에는 {{{{ 식으로 { 만 짝수개가 남아있을 테니까
	// s.size() / 2 를 연산 수(변수)에 더해준다
	
	int index = 1;
	while (true) {
		cin >> input;
		if (input[0] == '-') { break; }

		stack<char> s; 
		int calCnt = 0;
		for (auto& it : input) {
			if (it == '{') {
				s.push(it);
			}
			else if (it == '}') {
				if (!s.empty() && s.top() == '{') {
					s.pop();
				}
				else{
					s.push('{');
					calCnt++;
				}
			}
		}
		calCnt += s.size() / 2;
		cout << index++ << ". " << calCnt << '\n';
		
	}
}