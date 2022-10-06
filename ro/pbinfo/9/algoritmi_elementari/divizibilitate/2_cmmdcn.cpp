// https://www.pbinfo.ro/probleme/305/cmmdcn
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int gcd=0;
  for (int i=0; i<n; ++i) {
    int x;
    cin>>x;
    if (gcd==0) gcd=x;
    gcd = __gcd(gcd, x);
  }
  cout<<gcd;
}