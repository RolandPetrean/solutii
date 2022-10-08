// https://www.pbinfo.ro/probleme/4105
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int v[10000];

int nrdiv(int n) {
  int s=0;
  for (int d=1; d*d<=n; ++d) {
    if (n%d==0) {
      ++s;
      if (n/d != d) ++s;
    }
  }
  return s;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  for (int i=0; i<n; ++i) {
    int x;
    cin>>x;
    ++v[nrdiv(x)];
  }

  int perechi=0;
  for (int i=0; i<10000; ++i) perechi += v[i]*(v[i]-1)/2;
  cout<<perechi;
}