// https://www.pbinfo.ro/probleme/375/urmatorul-prim
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool prim(int n) {
  if (n==2 || n==3) return true;
  if (n<2 || n%2==0 || n%3==0) return false;
  for (int i=5; i*i<=n; i+=6) {
    if (n%i==0 || n%(i+2)==0) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;
  for (int i=n+1; i<=1000000007; ++i) {
    if (prim(i)) {
      cout<<i;
      return 0;
    }
  }
}