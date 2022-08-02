// https://cses.fi/problemset/task/1645
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

  stack<pair<ll,ll>> s{{{0,0}}};
  for (ll i=1; i<=n; ++i) {
    ll x;
    cin>>x;
    while (!s.empty() && s.top().first >= x) s.pop();
    cout<<s.top().second<<" ";
    s.push({x, i});
  }
}