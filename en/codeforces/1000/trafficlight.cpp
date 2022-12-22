// https://codeforces.com/contest/1744/problem/C
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    char c;
    string s;
    cin>>n>>c>>s;

    vector<int> g(2*n, 200005);
    for (int i=2*n-1; i>=0; --i) {
      int curr=i%n, prev=(curr+1)%n;
      if (s[curr]=='g') g[curr] = 0;
      g[curr] = min(g[curr], g[prev]+1);
    }

    int maxd=0;
    for (int i=0; i<n; ++i) {
      if (s[i]==c) maxd = max(maxd, g[i]);
    }

    cout<<maxd<<endl;
  }
}