// https://www.pbinfo.ro/probleme/111/nrfact
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  pair<long long long long> maxi={0,0};
  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;

    long long ox=x, d=2, f=0;
    while (x>1) {
      bool ok=false;
      while (x%d==0) {
        ok = true;
        x /= d;
      }
      if (ok) ++f; 
      ++d;
      if (d*d > x) d = x;
    }
    if (f > maxi.first || (f == maxi.first && ox < maxi.second)) maxi = {f, ox};
  }
  cout<<maxi.second;
}