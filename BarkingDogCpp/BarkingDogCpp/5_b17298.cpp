#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int A[10000005];
int input[10000005];
int res[10000005];
int k;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> k;

    for (int i = 0; i < k; i++) {
        int a = 0; 
        cin >> a;
        input[i] = a;
        A[a] = 1;
    }

    int nge = -1;

    for (int i = 10000005; i >= 0; i--) {
        if (A[i]) {
            if (i > nge) {
                res[i] = -1;
                cout << res[i] << "!!" << i << "!!";
            }
            else if (i < nge) {
                res[i] = nge;
                cout << res[i] << "!!" << i << "!!";
            }
            nge = i;
        }
    }

    for (int i = 0; i < 10000005; i++) {
        if(input[i] > 0) cout << res[input[i]] << ' ';
    }
}