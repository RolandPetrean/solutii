// https://codeforces.com/contest/1228/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

const int MOD=1000000007;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int h, w;
  cin>>h>>w;

  vector<int> r(h+2), c(w+2);
  for (int i=1; i<=h; ++i) cin>>r[i];
  for (int i=1; i<=w; ++i) cin>>c[i];

  bool valid=true;
  for (int i=1; i<=h && valid; ++i) {
    for (int j=1; j<=r[i] && valid; ++j) {
      if (c[j]==i-1) valid = false;
    }
  }
  for (int i=1; i<=w && valid; ++i) {
    for (int j=1; j<=c[i] && valid; ++j) {
      if (r[j]==i-1) valid = false;
    }
  }

  if (!valid) {
    cout<<0;
    return 0;
  }

  int g=0;
  for (int i=1; i<=h; ++i) {
    for (int j=1; j<=w; ++j) {
      if (r[i]+1<j && c[j]+1<i) ++g;
    }
  }

  long long e=1;
  for (int i=0; i<g; ++i) e = (e*2)%MOD;

  cout<<e;
}