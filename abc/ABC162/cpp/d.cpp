#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int main() {
  ll N;
  cin >> N;
  char S[N];
  ll CountR = 0;
  ll CountG = 0;
  ll CountB = 0;
  rep(i, N) {
    cin >> S[i];
    if (S[i] == 'R') CountR++;
    if (S[i] == 'G') CountG++;
    if (S[i] == 'B') CountB++;
  };
  ll ans = CountR * CountG * CountB;
  for (ll i = 0; i < N - 2; i++) {
    ll d = 1;
    while (i + 2 * d < N) {
      if ((S[i] != S[i + d]) && (S[i + d] != S[i + 2 * d]) &&
          (S[i + 2 * d] != S[i])) {
        ans--;
      }
      d++;
    }
  }
  cout << ans << endl;
}
