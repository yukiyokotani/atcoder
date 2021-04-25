#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    long long int K;
    cin >> N >> K;
    
    vector<int> a(N);
    for(int i = 0; i < N; i++) cin >> a[i];

    long long int ans = 0;
    long long int sum = 0;

    int r = 0;
    for(int l=0; l<N; l++){
        while(sum<K){
            if(r==N)break;
            else{
                sum += a[r];
                r++;
            }
        }
        if(sum<K)break;
        ans += N-r+1;
        sum -= a[l];
    }
    cout << ans << endl;
    return 0;
}