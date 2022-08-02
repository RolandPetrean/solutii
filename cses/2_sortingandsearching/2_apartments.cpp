// https://cses.fi/problemset/task/1084
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, m, k, x;
  cin>>n>>m>>k;

  vector<ll> a(n), b(m);
  for (ll i=0; i<n; i++) cin>>a[i];
  for (ll i=0; i<m; i++) cin>>b[i];
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  // Using two pointers with sorted vectors
  ll total=0, i=0, j=0;
  while (i < n && j < m) {
    if (abs(a[i] - b[j]) <= k) { // Found a match, increment i AND j
      total++;
      i++;
      j++;  
    } else if (b[j] >= a[i]-k) i++; // Increment i OR j accordingly
    else j++;
  }

  cout<<total;
}