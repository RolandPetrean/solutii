// https://www.pbinfo.ro/probleme/488/afisare
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  vector<ll> e(n);
  for (ll i=0; i<n; ++i) cin>>e[i];
  for (ll i=1; i<n; i+=2) cout<<e[i]<<" ";
  cout<<endl;
  if (n%2==0) --n;
  for (ll i=n-1; i>=0; i-=2) cout<<e[i]<<" ";
}