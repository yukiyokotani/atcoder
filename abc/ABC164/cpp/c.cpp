#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int main() {
  int N;
  cin >> N;
  string tmp;
  map<string, int> S;
  rep(i, N) {
    cin >> tmp;
    S[tmp]++;
  }
  cout << S.size() << endl;
  return 0;
}