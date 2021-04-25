#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long

int main(){
    int N;
    ll K;
    cin >> N >> K;
    
    vector<ll> a(N);
    for(int i = 0; i < N; i++) cin >> a[i];

    ll ans = 0;
    ll sum = 0;
    int r = 0;

    for(int l = 0; l < N; l++){
        while(sum < K){
            if(r == N) break;
            else{
                sum += a[r];
                r++;
            }
        }
        if(sum < K) break;
        ans += N - r + 1;
        sum -= a[l];
    }

    cout << ans << endl;
    return 0;
}