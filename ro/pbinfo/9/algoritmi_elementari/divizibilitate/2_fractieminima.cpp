// https://www.pbinfo.ro/probleme/112/fractieminima
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long nm=LONG_LONG_MAX, nr=LONG_LONG_MIN;
  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;
    nm = min(nm, x);
    nr = max(nr, x);
  }

  long long d;
  do {
    d = __gcd(nm, nr);
    nm /= d;
    nr /= d;
  } while (d > 1);

  cout<<nm<<"/"<<nr;
}