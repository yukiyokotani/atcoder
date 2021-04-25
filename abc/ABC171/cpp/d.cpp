#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1 << 29;

int main() {
  int n;
  cin >> n;
  map<ll, ll> a;

  ll tmp_a;
  ll s = 0;
  rep(i, n) {
    cin >> tmp_a;
    a[tmp_a] += 1;
    s += tmp_a;
  }

  int q;
  cin >> q;
  vector<ll> b(q), c(q);
  rep(i, q) cin >> b[i] >> c[i];

  ll cnt_b, cnt_c;
  ll prev_s = s;
  rep(i, q) {
    cnt_b = a[b[i]];
    cnt_c = a[c[i]];
    s = prev_s - cnt_b * b[i];
    s += c[i] * cnt_b;
    cout << s << endl;
    a.erase(b[i]);
    a.erase(c[i]);
    a.insert({c[i], cnt_b + cnt_c});
    prev_s = s;
  }
  return 0;
}