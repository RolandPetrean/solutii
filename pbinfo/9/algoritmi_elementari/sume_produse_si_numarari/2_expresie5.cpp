// https://www.pbinfo.ro/probleme/338/expresie5
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

ll powll(ll a, ll b) { 
  ll r=1;
  for (ll i=0; i<b; ++i) r *= a;
  return r;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll s=0;
  for (ll i=1; i<=n; ++i) s += powll(i, i);
  cout<<"Rezultatul este "<<s;
}