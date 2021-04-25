#include <iostream>
#include <vector>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main(){
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    rep(i, M){
        int j = std::max_element(A.begin(), A.end());
        A[j] = int(A[j] / 2);
    }
    cout << accumulate(A.begin(), A.end(), 0) << endl;
    return 0;
}