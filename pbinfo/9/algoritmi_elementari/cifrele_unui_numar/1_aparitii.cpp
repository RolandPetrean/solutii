// https://www.pbinfo.ro/probleme/107/aparitii
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
    cout<<1;
    return 0;
  }

  ll x = n%10, s=0;
  while (n) {
    if (n%10 == x) ++s;
    n /= 10;
  }
  cout<<s;
}