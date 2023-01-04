// https://codeforces.com/contest/1772/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--){ 
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    bool ok=false;
    for (int i=0; i<4 && !ok; ++i) {
      if (a<c && a<b && b<d && c<d) ok = true;
      int na=c, nb=a, nc=d, nd=b;
      a = na; b = nb; c = nc; d = nd;
    }

    cout<<(ok?"YES":"NO")<<endl;
  }
}