// https://codeforces.com/problemset/problem/1714/G
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int MAXN=200'005;

vector<int> e[MAXN];
vector<long long> bsum{};
int a[MAXN], b[MAXN], r[MAXN];

void dfs(int node, long long A) {
  bsum.push_back(b[node]);
  if (bsum.size()>1) bsum[bsum.size()-1] += bsum[bsum.size()-2];
  r[node] = distance(bsum.begin(), upper_bound(bsum.begin(), bsum.end(), A))-1;

  for (int c:e[node]) dfs(c, A+a[c]);
  bsum.pop_back();
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    cin>>n;

    for (int i=0; i<=n; ++i) {
      a[i] = b[i] = r[i] = 0;
      e[i].clear();
      bsum.clear();
    }

    for (int i=2; i<=n; ++i) {
      int p;
      cin>>p>>a[i]>>b[i];
      e[p].push_back(i);
    }

    dfs(1, 0);

    for (int i=2; i<=n; ++i) cout<<r[i]<<" ";
    cout<<endl;
  }
}