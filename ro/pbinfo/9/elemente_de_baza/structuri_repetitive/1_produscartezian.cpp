// https://www.pbinfo.ro/probleme/350/produscartezian
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m;
  cin>>n>>m;

  cout<<"{";
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      if (i>1 || j>1) cout<<",";
      cout<<"("<<i<<","<<j<<")";
    }
  }
  cout<<"}";
}