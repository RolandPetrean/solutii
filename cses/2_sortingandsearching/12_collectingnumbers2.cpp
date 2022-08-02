// https://cses.fi/problemset/task/2217
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, m;
  cin>>n>>m;

  ll r=1;
  vector<ll> x(n);
  unordered_map<ll, ll> idx;
  for (ll i=0; i<n; i++) {
    cin>>x[i];
    if (idx.find(x[i]+1) != idx.end()) r++;
    idx[x[i]] = i;
  }

  for (ll i=0; i<m; ++i) {
    ll a, b;
    cin>>a>>b;
    --a;
    --b;

    if (a <= idx[x[b]+1] && b > idx[x[b]+1] && x[b] <= n) --r;
    if (a >= idx[x[b]+1] && b < idx[x[b]+1] && x[b] <= n) ++r;
    if (a >= idx[x[b]-1] && b < idx[x[b]-1] && x[b] > 1) --r;
    if (a <= idx[x[b]-1] && b > idx[x[b]-1] && x[b] > 1) ++r;

    if (b <= idx[x[a]+1] && a > idx[x[a]+1] && x[a] <= n) --r;
    if (b >= idx[x[a]+1] && a < idx[x[a]+1] && x[a] <= n) ++r;
    if (b >= idx[x[a]-1] && a < idx[x[a]-1] && x[a] > 1) --r;
    if (b <= idx[x[a]-1] && a > idx[x[a]-1] && x[a] > 1) ++r;
    
    swap(x[a], x[b]);
    idx[x[a]] = a;
    idx[x[b]] = b;
    cout<<r<<endl;
  }
}