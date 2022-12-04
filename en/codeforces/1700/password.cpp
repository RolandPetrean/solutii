// https://codeforces.com/problemset/problem/126/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  cin>>s;
  int n=s.size();

  vector<int> pi(n);
  for (int i=1; i<n; ++i) {
    int j=pi[i-1];
    while (j>0 && s[j] != s[i]) j = pi[j-1];
    if (s[j] == s[i]) pi[i] = j+1;
  }

  int len=pi[n-1];
  if (len!=0) {
    bool found=false;
    for (int i=0; i<n-1 && !found; ++i) {
      if (pi[i]==len) found = true;
    }
    if (found) {
      cout<<s.substr(0,len);
      return 0;
    } else if (pi[pi[n-1]-1] != 0) {
      cout<<s.substr(0,pi[pi[n-1]-1]);
      return 0;
    }
  }
  cout<<"Just a legend";
}