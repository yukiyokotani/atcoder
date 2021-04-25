#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int main() {
  ll A, B, N;
  cin >> A >> B >> N;
  ll x = min(N, B - 1);
  cout << floor(A * x / B) << endl;
}