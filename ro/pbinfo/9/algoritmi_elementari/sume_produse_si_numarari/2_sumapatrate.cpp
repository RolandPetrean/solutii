// https://www.pbinfo.ro/probleme/1212/sumapatrate
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 10234573

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll n1=n, n2=n+1, n3=2*n+1;
  if (n1&1) n2 /= 2;
  else n1 /= 2;
  if (n1%3==0) n1 /= 3;
  else if (n2%3==0) n2 /= 3;
  else n3 /= 3;
  
  cout<<n1 * n2 % mod * n3 % mod;
}