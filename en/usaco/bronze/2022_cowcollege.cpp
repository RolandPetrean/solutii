// http://www.usaco.org/index.php?page=viewproblem&cpid=1239
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long
const int MAXV=1000005;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  array<int,MAXV> p{};
  p[0] = n;
  for (int i=0; i<n; ++i) {
    int x;
    cin>>x;
    --p[x+1];
  }

  int maxm=0, t=0;
  for (int i=1; i<MAXV; ++i) {
    p[i] += p[i-1];
    if (i*p[i]>maxm) {
      maxm = i*p[i];
      t = i;
    }
  }

  cout<<maxm<<" "<<t;
}