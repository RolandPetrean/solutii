// https://cses.fi/problemset/task/1090
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

  vector<ll> p;
  for (ll i=0; i<n; i++) cin>>p[i];
  sort(p.begin(), p.end());

  ll i=0, total=0;
  for (ll j=n-1; j>=0; j--) { // Iterate from the heaviest child to lightest
    if (p[i] + p[j] <= x) i++; // Lighter child can be paired with heavier child, increment light
    total++; // Total number is increased (the heavy child rides alone or is paired with light)
  }

  cout<<total;
}