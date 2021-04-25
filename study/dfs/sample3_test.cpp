#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
const int MOD = 1E9 + 7;
const int INF = 1 << 29;

int test1() {
  int node = 0;
  int ans = 0;
  bool flag;
  rep(i, N) {
    deque<int> que;
    flag = false;
    if (reached[i]) continue;
    ++ans;
    que.push_front(i);
    // cout << "start_node: " << i << " **********\n";
    while (que.size()) {
      if (flag) break;
      // for (int n : que) {
      //   cout << n << ", ";
      // };
      // cout << endl;
      node = que.front();
      if (reached[node]) {
        flag = true;
        continue;
      } else {
        reached[node] = true;
        que.pop_front();
      };
      for (int n : tree[node]) {
        que.push_front(n);
      };
    };
    // cout << "rest_que: " << que.size() << endl;
    if (que.size()) --ans;
  };
  cout << ans << endl;
  return 0;
}

int n, m;

vector<vector<int>> con;
vector<bool> check;

bool isTree(int n, int p) {
  //    cout << n << endl;
  if (check[n]) return false;
  check[n] = true;

  for (auto elm : con[n]) {
    if (elm != p)
      if (not isTree(elm, n)) return false;
  }
  return true;
}

int test2() {
  int n, m;
  cin >> n >> m;

  con.resize(n);
  check.assign(n, false);
  for (auto i = 0; i < m; i++) {
    int start, end;
    cin >> start >> end;
    con[start - 1].push_back(end - 1);
    con[end - 1].push_back(start - 1);
  }

  int ans = 0;
  for (auto i = 0; i < n; i++) {
    //        cout << "i: " << i << ", ans:" << ans << endl;
    if (not check[i]) {
      if (isTree(i, -1)) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}

int main() {
  cin >> n >> m;
  con.resize(n);
  check.assign(n, false);
  for (auto i = 0; i < m; i++) {
    int start, end;
    cin >> start >> end;
    con[start - 1].push_back(end - 1);
    con[end - 1].push_back(start - 1);
  }
  int N, M;
  cin >> N >> M;
  vector<vector<int>> tree(N);
  vector<int> reached(N);
  int edge_from, edge_to;
  rep(i, M) {
    cin >> edge_from >> edge_to;
    tree[edge_from - 1].push_back(edge_to - 1);
  };
}