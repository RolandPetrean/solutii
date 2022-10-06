// https://www.pbinfo.ro/probleme/121/ciframaxima2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;
  if (n == 0) {
    cout<<"0 1";
    return 0;
  }

  array<ll,10> cf{};
  while (n) {
    cf[n%10]++;
    n /= 10;
  }
  for (ll i=9; i>0; --i) {
    if (cf[i] != 0) {
      cout<<i<<" "<<cf[i];
      return 0;
    }
  }
}