// https://www.pbinfo.ro/probleme/62/factorizare
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll d=2;
  while (n>1) {
    ll p=0;
    while (n%d==0) {
      n /= d;
      ++p;
    }
    if (p != 0) cout<<d<<" "<<p<<endl;
    ++d;
    if (d*d > n) d = n;
  }
}