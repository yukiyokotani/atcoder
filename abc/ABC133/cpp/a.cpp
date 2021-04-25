#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, A, B;
    cin >> N >> A >> B;
    int price;
    int ans = A * N;

    for(int i=0; i<=N; i++){
        price = i * A + B;
        if(price < ans){
            ans = price;
        }
    }

    cout << ans << endl;
    return 0;
}