#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int n;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        string input;
        cin >> input;
        list<char> lst = {};
        auto iter = lst.begin();

        for (auto& it : input) {
            if (it == '<' && iter != lst.begin()) iter--;
            else if (it == '>' && iter != lst.end()) iter++;
            else if (it == '-' && iter != lst.begin()) iter = lst.erase(--iter);
            else if (it != '<' && it != '>' && it != '-') {
                lst.insert(iter, it);
            }
        }

        for (auto& it : lst) {
            cout << it;
        }
        cout << '\n';
    }
}