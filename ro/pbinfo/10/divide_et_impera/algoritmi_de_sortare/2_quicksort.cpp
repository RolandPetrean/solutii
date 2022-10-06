// https://www.pbinfo.ro/probleme/1024/quicksort
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  vector<ll> e(n);
  for (ll i=0; i<n; ++i) cin>>e[i];
  sort(e.begin(), e.end());
  
  for (auto v : e) cout<<v<<" ";
}