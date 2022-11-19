// https://codeforces.com/problemset/problem/1553/D
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int q;
  cin>>q;

  while (q--) {
    string s, t;
    cin>>s>>t;

    if (t.size()>s.size()) {
      cout<<"NO\n";
      continue;
    }

    int i=s.size()-1, j=t.size()-1;
    while (i>=0 && j>=0) {
      if (s[i]==t[j]) --j;
      else --i;
      --i;
    }

    if (j==-1) cout<<"YES\n";
    else cout<<"NO\n";
  }
}