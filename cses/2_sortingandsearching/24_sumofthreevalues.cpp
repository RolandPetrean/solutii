// https://cses.fi/problemset/task/1641
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, x;
  cin>>n>>x;

  vector<pair<ll,ll>> a;
  for (ll i=0; i<n; ++i) {
    ll t;
    cin>>t;
    a.push_back({t, i});
  }
  sort(a.begin(), a.end());

  for (ll i=0; i<n; ++i) {
    ll l=0, r=n-1;
    while (l < r) {
      if (a[l].first + a[r].first + a[i].first == x && i != l && i != r) {
        cout<<a[l].second+1<<" "<<a[r].second+1<<" "<<a[i].second+1;
        return 0;
      }
      if (a[l].first+a[r].first >= x-a[i].first) --r;
      else ++l;
    }
  }
  cout<<"IMPOSSIBLE";
}