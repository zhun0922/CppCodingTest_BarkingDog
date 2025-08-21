#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

//4개의 기호 ( ) [ ] 
//) ] 가 나왔을 때 empty()면 에러. pop()수행 가능 후 empty()일 경우 result += 값
//닫힌 괄호열이 나왔을때
//1. empty() 가 아닐 경우 임시값 x를 수치에 맞게 저장하고 pop한다. 
//1 - 1. pop을 한 후 empty() 일경우 result에 x를 더한다. 
// 
//2. empty() 일 경우 에러.

//3. 열린괄호는 푸시

//4. 다 수행한 후 empty()가 아니면 에러

//닫힌괄호일 때 
//만약 x 가 값이 없으면 x = 2;
//있으면 x = 2 * x;

// 다 하고 empty()면 result += x;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s = "";
	getline(cin, s);

	int x = -1;
	int result = 0;

	stack<char> st;
	/*for (auto& it : s) {
		if (it == '(' || it == '[') {
			st.push(it);
		}
		
		else {
			if (s.empty()) {
				cout << 0; break;
			}
			else if (it == ')') {
				if (st.top() == '(') {
					if (x == -1) {
						x = 2;
					}
					else {
						x *= 2;
					}
					st.pop();
				}
				else { cout << 1; break; }
			}

			else if (it == ']') {
				if (st.top() == '[') {
					if (x == -1) {
						x = 3;
					}
					else {
						x *= 3;
					}
					st.pop();
				}
				else { cout << 1; break; }
			}

			if (st.empty()) {
				result += x;
				x = -1;
			}
		}
	}*/

	for (auto& it : s) {
		if (it == '(' || it == '[') {
			st.push(it);
		}
	}

	if (!st.empty()) cout << 3 << st.top();

	else cout << result;
}
