#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
using namespace std;

int T, n;
string p;
string SI;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    for (int i = 0; i < T; i++) {
        deque<int> DQ;
        cin >> p;
        cin >> n;

        cin >> SI;
        string s = "";
        for (int k = 0; k < SI.size(); k++) {
            if (SI[k] != '[' && SI[k] != ',' && SI[k] != ']') {
                s += SI[k];
            }
            else {
                if (s != "") {
                    DQ.push_back(stoi(s));
                    s.clear();
                }
            }
        }

        bool isReverse = false;
        bool isError = false;
        for (auto& it : p) {
            if (it == 'R') {
                isReverse = !isReverse;
            }
            if (it == 'D') {
                if (DQ.empty()) {
                    cout << "error" << '\n';
                    isError = true;
                    break;
                }
                else if (!isReverse) {
                    DQ.pop_front();
                }
                else DQ.pop_back();
            }
        }
        if (isError) {
            continue;
        }
        if (isReverse) {
            reverse(DQ.begin(), DQ.end());
        }

        cout << '[';
        for (int i = 0; i < DQ.size(); i++) {
            cout << DQ[i];
            if (i != (int)DQ.size() - 1) {
                cout << ',';
            }
        }
        cout << ']' << '\n';
    }
}