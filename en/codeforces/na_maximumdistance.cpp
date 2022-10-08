// https://codeforces.com/gym/102951/problem/A
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> xs(n), ys(n);
  for (int i=0; i<n; ++i) cin>>xs[i];
  for (int i=0; i<n; ++i) cin>>ys[i];

  int maxdist=0;
  for (int i=0; i<n; ++i) {
    for (int j=i+1; j<n; ++j) {
      int xdist=abs(xs[i]-xs[j]), ydist=abs(ys[i]-ys[j]);
      maxdist = max(maxdist, xdist*xdist+ydist*ydist);
    }
  }

  cout<<maxdist;
}