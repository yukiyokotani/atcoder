#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  while (A > 0 & C > 0) {
    C -= B;
    A -= D;
  }
  if (C <= 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}