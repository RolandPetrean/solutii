// https://www.pbinfo.ro/probleme/64/numarperfect
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll s=0;
  for (ll i=1; i*i <= n; ++i) {
    if (n%i == 0) {
      s += i;
      if (n/i != i) s += n/i;
    }
  }
  if (2*n == s) cout<<n<<" este perfect";
  else cout<<n<<" nu este perfect";
}