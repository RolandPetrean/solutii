// https://cses.fi/problemset/task/1652
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, q;
  cin>>n>>q;

  vector<vector<int>> s(n+2, vector<int>(n+2));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=n; ++j) {
      char c;
      cin>>c;
      s[i][j] = s[i-1][j]+s[i][j-1]-s[i-1][j-1] + (c=='*');
    }
  }

  for (int i=0; i<q; ++i) {
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<s[x2][y2] - s[x2][y1-1] - s[x1-1][y2] + s[x1-1][y1-1]<<endl;
  }
}