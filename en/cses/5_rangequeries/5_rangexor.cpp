// https://cses.fi/problemset/task/1650
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, q;
  cin>>n>>q;

  vector<int> s(n);
  cin>>s[0];
  for (int i=1; i<n; ++i) {
    cin>>s[i];
    s[i] ^= s[i-1];
  }

  for (int i=0; i<q; ++i) {
    int a, b;
    cin>>a>>b;
    --a; --b;
    cout<<(a?s[b]^s[a-1]:s[b])<<endl;
  }
}