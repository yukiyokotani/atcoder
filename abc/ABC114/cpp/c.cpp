#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

ll N;

void rec(ll cur, ll isUsed, ll &count) {
  if (cur > N) return;
  if (isUsed == 0b111) ++count;
  rec(cur * 10 + 7, isUsed | 0b001, count);
  rec(cur * 10 + 5, isUsed | 0b010, count);
  rec(cur * 10 + 3, isUsed | 0b100, count);
}

int main() {
  cin >> N;
  ll count = 0;
  rec(0, 0, count);
  cout << count << endl;
}