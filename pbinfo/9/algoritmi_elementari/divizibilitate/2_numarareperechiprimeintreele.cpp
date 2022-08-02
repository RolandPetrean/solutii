// https://www.pbinfo.ro/probleme/80/numarareperechiprimeintreele
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll x, lx, c=0;
  cin>>lx;
  while (lx != 0 && cin>>x && x != 0) {
    if (__gcd(x, lx) == 1) ++c;
    lx = x;
  }
  cout<<c;
}