#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    for(int i = 0; i < n; i++) cin >> p[i];
    int ans = 0;
    for(int i = 1; i < n-1; i++){
        if((p[i-1] < p[i]) && (p[i] < p[i+1])) ans++;
        else if((p[i-1] > p[i]) && (p[i] > p[i+1])) ans++;
    }
    // for(int i = 1; i < n-1; i++){
    //     cout << p[i-1];
    //     cout << p[i];
    //     cout << p[i+1];
    //     if((p[i-1] < p[i]) && (p[i] < p[i+1])) printf(" True\n");
    //     else if((p[i-1] > p[i]) && (p[i] > p[i+1])) printf(" True\n");
    // }
    cout << ans << endl;
    return 0;
};