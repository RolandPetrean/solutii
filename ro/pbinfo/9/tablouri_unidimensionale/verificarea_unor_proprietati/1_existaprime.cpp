// https://www.pbinfo.ro/probleme/506/existaprime
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
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

  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;
    if (prim(x)) {
      cout<<"DA";
      return 0;
    }
  }
  cout<<"NU";
}