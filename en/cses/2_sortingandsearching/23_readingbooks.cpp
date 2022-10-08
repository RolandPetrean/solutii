// https://cses.fi/problemset/task/1631
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int s=0, maxt=0;
  for (int i=0; i<n; ++i) {
    int t;
    cin>>t;
    s += t;
    maxt = max(maxt, t);
  }

  if (s-maxt > maxt) cout<<s;
  else cout<<2*maxt;
}