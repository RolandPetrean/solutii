// https://cses.fi/problemset/task/1629
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, a, b;
  cin>>n;

  // Sort by soonest movie ending instead of starting
  vector<pair<ll,ll>> movies;
  for (ll i=0; i<n; i++) {
    cin>>a>>b;
    movies.push_back({b, a}); // Reversed values
  }
  sort(movies.begin(), movies.end());

  ll last=0, total=0;
  for (auto [b, a] : movies) {
    if (a >= last) {
      total++;
      last = b;
    }
  }

  cout<<total;
}