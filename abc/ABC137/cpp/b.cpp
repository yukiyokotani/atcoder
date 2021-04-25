#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int MOD = 1E9 + 9;
const int INF = 1<<29; 

int main(){
    int K, X;
    cin >> K >> X;
    for(int i = (X - K + 1); i < X + K; i++){
        cout << i << ' ';
    }
    cout << endl;
}