#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1 << 29;

template <typename TypeInt>
std::string Itoa(const TypeInt v, int base) {
  static const char table[] = "abcdefghijklmnopqrstuvwxyz";
  string ret;
  static numeric_limits<TypeInt> t;
  TypeInt n = v;
  if (t.is_signed) {
    if (v < 0) n *= -1;
  }

  while (n >= base) {
    ret += table[n % base];
    n /= base;
    n -= 1;
  }
  ret += table[n];
  if (t.is_signed) {
    if (v < 0 && base == 10) ret += '-';
  }
  // 文字列の順番を逆にする
  std::reverse(ret.begin(), ret.end());

  return ret;
}

int main() {
  ll n;
  cin >> n;
  string ans = Itoa(n - 1, 26);
  cout << ans << endl;
}