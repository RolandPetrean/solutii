// https://codeforces.com/contest/1731/problem/D
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  string s;
  cin>>n>>s;

  int i=0;
  while (i<n && s[i]=='0') ++i;
  if (i==n) {
    cout<<0;
    return 0;
  }

  s = s.substr(i);
  n = s.size();
  string orr=s;
  for (i=1; i<n; ++i) {
    string x=s;
    for (int j=i; j<n; ++j) {
      if (x[j]=='0') x[j] = s[j-i];
    }
    orr = max(orr, x);
    if (s[i]=='0') break;
  }
  
  cout<<orr;
}