// https://codeforces.com/contest/1731/problem/C
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
    cin>>n>>s;

    vector<int> a(n);
    for (int i=0; i<n; ++i) cin>>a[i];

    int i=0, x=0;
    while (s[i] == '1') x += a[i++];

    int currmin=0, currs=0;
    for (; i<n; ++i) {
      if (s[i]=='0') {
        if (i && s[i-1]=='1') x += currs-currmin;
        currmin = a[i];
        currs = a[i];
      } else {
        currmin = min(currmin, a[i]);
        currs += a[i];
      }
    }
    if (s[n-1]=='1') x += currs-currmin;
    cout<<x<<endl;
  }
}