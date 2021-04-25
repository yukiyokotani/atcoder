#include <algorithm>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 9;
const int INF = 1 << 29;

int main() {
  int n, tmp;
  cin >> n;
  vector<ll> a(n);
  vector<ll> b(n);
  rep(i, n) a[i] = 0;
  rep(i, n) {
    cin >> tmp;
    a[tmp - 1] += 1;  // nの数をカウントし、n-1に保存
    b[i] = tmp;       // 入力のn
  }
  ll sum = 0;
  rep(i, n) { sum += (a[i] * (a[i] - 1)) / 2; }
  rep(i, n) {
    ll ans = sum - a[b[i] - 1] + 1;
    cout << ans << endl;
  }
}