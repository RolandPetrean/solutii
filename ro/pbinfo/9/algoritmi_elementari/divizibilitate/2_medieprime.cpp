// https://www.pbinfo.ro/probleme/116/medieprime
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

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
  
  long long n;
  cin>>n;
  
  long long s=0, p=0;
  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;
    if (prim(x)) {
      s += x;
      ++p;
    }
  }
  cout<<fixed<<setprecision(2)<<(double)(s*100/p)*0.01; // wtf
}