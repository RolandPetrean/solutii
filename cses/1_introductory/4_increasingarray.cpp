// https://cses.fi/problemset/task/1094
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
  
  ll x, moves=0, maxx=0;
  for (ll i=0; i<n; i++) {
    cin>>x;
    maxx = max(maxx, x);
    moves += maxx - x;
  }
  cout<<moves;
}