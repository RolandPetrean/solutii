// https://www.pbinfo.ro/probleme/513/ksort1
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, k;
  cin>>n>>k;

  vector<vector<int>> v(k);
  for (int i=1; i<=n; ++i) {
    int x;
    cin>>x;
    v[i%k].push_back(x);
  }
  for (int i=0; i<k; ++i) sort(v[i].begin(), v[i].end());

  for (int i=1; i<=n; ++i) {
    cout<<v[i%k][0]<<" ";
    v[i%k].erase(v[i%k].begin());
  }
}