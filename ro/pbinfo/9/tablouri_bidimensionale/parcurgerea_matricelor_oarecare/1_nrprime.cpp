// https://www.pbinfo.ro/probleme/666/nrprime
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

bool prim(long long n) {
  if (n <= 1) return false;
  for (int i=2; i*i<=n; ++i) {
    if (n%i==0) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, m;
  cin>>n>>m;

  long long s=0;
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      long long x;
      cin>>x;
      if (i&1 && prim(x)) ++s;
    }
  }
  cout<<s;
}