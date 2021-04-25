#include <algorithm>
#include <iostream>
#include <vector>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 9;
const int INF = 1 << 29;

int main() {
  int K, S;
  cin >> K >> S;
  int ans = 0;
  for (int i = 0; i <= K; i++) {
    for (int j = 0; j <= K; j++) {
      int res = S - i - j;
      if ((0 <= res) && (res <= K)) ans++;
    }
  }
  cout << ans << endl;
  return 0;
}