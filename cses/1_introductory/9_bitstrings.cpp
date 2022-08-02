// https://cses.fi/problemset/task/1617
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

  ll res = 1;
  for (ll i=1; i<=n; i++) {
    res = res * 2 % mod;
  }
  cout<<res;
}