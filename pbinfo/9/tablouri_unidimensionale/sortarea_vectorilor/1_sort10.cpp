// https://www.pbinfo.ro/probleme/4146/sort10
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

  vector<ll> e;
  for (ll i=0; i<n; ++i) {
    ll x;
    cin>>x;
    if (x%10==0) e.push_back(x);
  }
  sort(e.begin(), e.end(), greater<ll>());

  if (e.size() == 0) cout<<"NU EXISTA";
  else for (auto v : e) cout<<v<<" ";
}