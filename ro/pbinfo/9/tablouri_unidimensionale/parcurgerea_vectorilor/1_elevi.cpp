// https://www.pbinfo.ro/probleme/551/elevi
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m;
  cin>>n>>m;

  int maxi=-1;
  vector<vector<int>> c(n, vector<int>(m));
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      cin>>c[i][j];
      maxi = max(maxi, c[i][j]);
    }
  }

  int cnt=0;
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      if (c[i][j]==maxi) {
        ++cnt;
        break;
      }
    }
  }
  cout<<maxi<<" "<<cnt;
}