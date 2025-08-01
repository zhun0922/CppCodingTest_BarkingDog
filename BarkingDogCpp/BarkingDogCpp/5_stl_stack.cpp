#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main(void) {
	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout << s.size() << '\n'; // 3
	if (s.empty()) cout << "s it empty\n";
	else cout << "s is not empty\n"; // s is not empty
	s.pop(); // 10 20
	cout << s.top() << '\n'; // 20
	s.pop(); // 10
	cout << s.top() << '\n'; // 10
	s.pop(); //empty
	if (s.empty()) cout << "s is empty\n"; // s is empty
	//cout << s.top() << '\n'; // runtime error 발생
	//cout << s.pop() << '\n'; // runtime error 발생
	
}