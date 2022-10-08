// https://www.pbinfo.ro/probleme/61/afisaredivizoricomuni
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b;
  cin>>a>>b;
  long long d = __gcd(a, b);
  for (int i=1; i<=__gcd(a, b); ++i) {
    if (d%i == 0) cout<<i<<" ";
  }
}