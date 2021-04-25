#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int64_t N;
    cin >> N;
    int64_t ans;
    ans = N * (N - 1) / 2;
    cout << ans << endl;
}