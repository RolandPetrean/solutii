// https://codeforces.com/contest/1744/problem/A
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
    string s;
    cin>>n;

    vector<int> a(n);
    for (int i=0; i<n; ++i) cin>>a[i];
    cin>>s;

    bool ok=true;
    array<char,51> f{};
    for (int i=0; i<n && ok; ++i) {
      if (f[a[i]] && f[a[i]] != s[i]) ok = false; 
      f[a[i]] = s[i];
    }

    cout<<(ok?"YES":"NO")<<endl;
  }
}