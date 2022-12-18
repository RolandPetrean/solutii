// https://codeforces.com/contest/1615/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const int MAXN=200005;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;
  
  vector<vector<int>> p(18, vector<int>(MAXN));
  for (int i=0; i<18; ++i) {
    for (int j=1; j<MAXN; ++j) p[i][j] = p[i][j-1]+((j>>i)&1);
  }

  while (t--) {
    int l, r;
    cin>>l>>r;

    int maxb=0;
    for (int i=0; i<18; ++i) maxb = max(maxb, p[i][r]-p[i][l-1]);
    cout<<r-l-maxb+1<<endl;
  }
}