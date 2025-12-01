#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int N, M, input, result;


int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    cin >> N >> M;

    deque<int> DQ;
    for (int i = 0; i < N; i++) {
        DQ.push_back(i + 1);
    }
    for (int i = 0; i < M; i++) {
        cin >> input;

        if (input == DQ.front()) {
            DQ.pop_front();
        }
        else {
            int index = find(DQ.begin(), DQ.end(), input) - DQ.begin();

            if (index <= (int)DQ.size() / 2) {
                //오른쪽 쉬프트
                while (DQ[0] != input) {
                    int tmp = DQ.front();
                    DQ.pop_front();
                    DQ.push_back(tmp);
                    result++;
                }
                DQ.pop_front();
            }
            else {
                while (DQ[0] != input) {
                    int tmp = DQ.back();
                    DQ.pop_back();
                    DQ.push_front(tmp);
                    result++;
                }
                DQ.pop_front();
            }
        }
    }

    cout << result;
}