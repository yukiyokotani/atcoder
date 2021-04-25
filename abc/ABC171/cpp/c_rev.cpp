#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int mod = 1E9 + 7;
const int inf = 1 << 29;

char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int base = 26;

int main() {
  ll n;
  cin >> n;
  string name = "";
  n -= 1;
  while (n >= base) {
    name += alphabet[n % base];
    n /= base;
    n -= 1;
  }
  name += alphabet[n];
  reverse(name.begin(), name.end());
  cout << name << endl;
  return 0;
}