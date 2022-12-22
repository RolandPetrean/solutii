#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    vector<int> d1{}, d2{}, dd{};
    for (int div=1; div*div<=a; ++div) {
      if (a%div==0) {
        d1.push_back(div);
        if (a/div!=div) d1.push_back(a/div);
      }
    }
    for (int div=1; div*div<=b; ++div) {
      if (b%div==0) {
        d2.push_back(div);
        if (b/div!=div) d2.push_back(b/div);
      }
    }
    for (int i=0; i<d1.size(); ++i) {
      for (int j=0; j<d2.size(); ++j) dd.push_back(d1[i]*d2[j]);
    }
    sort(dd.begin(), dd.end());

    int p=a*b;
    int x=INT_MIN, y=INT_MIN;
    for (int X:dd) {
      int cx=c/X*X, cy=d/(p/X)*(p/X);
      if (cx>a && cy>b) {
        x = cx; y = cy;
      }
    }

    if (x==INT_MIN) cout<<"-1 -1\n";
    else cout<<x<<" "<<y<<endl;
  }
}