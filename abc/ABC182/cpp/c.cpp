#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1<<29; 

int main(){
    string n;
    cin >> n;
    int order = n.length();
    int ans = -1;
    rep(bit, 1<<order){
        if(bit == 0) continue;
        int sum = 0;
        int bit_sum = 0;
        rep(i, order){
            if(bit & (1<<i)) {
                sum += int(n[i]);
                bit_sum++;
            };
        }
        if(sum % 3 == 0){
            int del = order - bit_sum;
            if(ans == -1) {
                ans = del;
                continue;
            };
            ans = min(ans, del);
        }
    }
    cout << ans << endl;
    return 0;
}