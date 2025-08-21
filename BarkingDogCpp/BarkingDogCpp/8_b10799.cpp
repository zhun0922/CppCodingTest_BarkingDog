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

// ) 가 나오면 result에 1추가 후 pop
// ( 가 나오면 push(it)



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string input = "";
	getline(cin, input);

	stack<char> s;
	char pre = ' ';

	int result = 0;

	for (auto& it : input) {
		if (pre == '(' && it == ')') { //레이저일 경우
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