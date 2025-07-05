#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int score;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> score;

	switch (score / 10 )
	{
	case  10: case 9: 
			cout << "A";
			break;
	case  8:
		cout << "B";
		break;
	case  7:
		cout << "C";
		break;
	case  6:
		cout << "D";
		break;
	default:
		cout << "F";
		break;
	}
	
}