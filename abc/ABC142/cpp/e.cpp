#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int N, M;
    vector<int> key(M);
    int box[M][N];
    cin >> N >> M;
    rep(i, M){
        int a, b;
        cin >> a >> b;
        key[i] = a;
        // rep(j, b){
        //     int c;
        //     cin >> c;
        //     box[i][c-1] = 1;
        // }
    }
    cout << box;
    return 0;
}