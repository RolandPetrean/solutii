// https://www.pbinfo.ro/probleme/1157/ksort2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, k;
  cin>>n>>k;

  vector<ll> e(n);
  for (ll i=0; i<n; ++i) cin>>e[i];
  sort(e.begin(), e.begin()+k);
  sort(e.begin()+k, e.end(), greater<ll>());

  for (auto v : e) cout<<v<<" ";
}