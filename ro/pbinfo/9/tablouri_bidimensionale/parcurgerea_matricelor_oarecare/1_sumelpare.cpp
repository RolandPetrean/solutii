// https://www.pbinfo.ro/probleme/662/sumelpare
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, m;
  cin>>n>>m;

  pair<long long long long> maxi{-1,0};
  for (int i=1; i<=n; ++i) {
    long long s=0;
    for (int j=0; j<m; ++j) {
      long long x;
      cin>>x;
      if (x%2==0) s += x;
    }
    maxi = max(maxi, {s, i});
  }
  cout<<maxi.second;
}