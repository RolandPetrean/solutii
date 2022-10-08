// https://www.pbinfo.ro/probleme/44/primeinterval
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool prim(long long n) {
  if (n < 2) return false;
  for (int i=2; i*i<=n; i++) {
    if (n%i==0) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b;
  cin>>a>>b;

  long long s=0;
  for (int i=min(a,b); i<=max(a,b); i++) {
    if (prim(i)) ++s;
  }
  cout<<s;
}