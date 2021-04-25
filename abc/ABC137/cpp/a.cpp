#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int MOD = 1E9 + 9;
const int INF = 1<<29; 

int main(){
    int A, B;
    cin >> A >> B;
    cout << max(A + B, max(A - B, A * B)) << endl;
}