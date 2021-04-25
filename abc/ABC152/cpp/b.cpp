#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int MOD = 1E9 + 9;
const int INF = 1<<29; 

int main(){
    int a, b;
    cin >> a >> b;
    if(a >= b){
        rep(i, a) cout << b;
    }else{
        rep(i, b) cout << a;
    }
}