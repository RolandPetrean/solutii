// https://www.pbinfo.ro/probleme/245/nrdivmax
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  pair<int,int> maxi={0,0};
  for (int i=1; i<=n; ++i) {
    int x=i, nrdiv=1;
    for (int d=2; d*d<=x; ++d) {
      if (x%d==0) {
        int p=0;
        while (x%d==0) {
          ++p;
          x /= d;
        }
        nrdiv *= p+1;
      }
    }
    if (x!=1) nrdiv *= 2;
    if (nrdiv>maxi.first) maxi={nrdiv,i};
  }
  cout<<maxi.second;
}