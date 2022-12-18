// https://codeforces.com/contest/1766/problem/C
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int m;
    cin>>m;

    int minp=m+1;
    vector<vector<char>> w(2, vector<char>(m+2, 'W'));
    for (int i=1; i<=m; ++i) {
      cin>>w[0][i];
      if (w[0][i]=='B') minp = min(minp, i);
    }
    for (int i=1; i<=m; ++i) {
      cin>>w[1][i];
      if (w[1][i]=='B') minp = min(minp, i);
    }

    bool ok=true;
    for (int ss=0; ss<=1; ++ss) {
      ok = true;
      int side=ss;
      
      for (int i=minp; i<=m && ok; ++i) {
        int o=1-side;
        if (w[side][i]=='B' && w[o][i]=='B') side = o;
        else if (w[side][i]=='W') ok = false;
      }
      if (ok) break;
    }

    cout<<(ok?"YES":"NO")<<endl;
  }
}