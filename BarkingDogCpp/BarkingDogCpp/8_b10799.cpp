#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

//쇠막대기 절단
//레이저인지 확인 필요 
//이전 입력을 임시 저장해두고
//prev가 (인데 다음입력이 ) 가 나왔다면 
//레이저이므로 size()계산

//prev가 (인데 다음입력이 (라면 push
//prev가 )이면 그냥 저장만 하면됨



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string input = "";
	getline(cin, input);

	stack<char> s;
	char pre = ' ';

	//그냥 pre 가 ( 일때 다음이 )인것만 보면돼
	// 


	int result = 0;
	/*for (auto& it : input) {
		if (pre == ' ') {
			s.push(it);
		}
		else if (pre == '(') {
			if (it == ')' && !s.empty()) {
				s.pop();
				result += s.size();
			}
			else if (it == '(') {
				s.push(it);
			}
		}

		if (pre == ')') {
			if (it == ')' && !s.empty()) {
				result ++;
				s.pop();
			}
			else if (it == '(') {
				s.push(it);
			}
		}

		pre = it;
	}*/

	for (auto& it : input) {
		if (pre == '(' && it == ')') {
			s.pop();
			result += s.size();
		}

		else if (it == ')') {
			result++;
			s.pop();
		}
		else {
			s.push(it);
		}

		pre = it;
	}
	
	cout << result;
}