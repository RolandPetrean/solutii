// https://www.pbinfo.ro/probleme/1340/rucsac
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

bool cmp(pair<ll,ll> a, pair<ll,ll> b) {
  return (double) a.first / (double) a.second > (double) b.first / (double) b.second;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, gmax;
  cin>>n>>gmax;

  vector<pair<ll,ll>> o;
  for (ll i=0; i<n; ++i) {
    ll g, v;
    cin>>g>>v;
    o.push_back({v, g});
  }

  double total=0;
  sort(o.begin(), o.end(), cmp);
  for (ll i=0; i<n; ++i) {
    if (o[i].second <= gmax) {
      gmax -= o[i].second;
      total += o[i].first;
    } else {
      total += o[i].first * ((double) gmax / (double) o[i].second);
      break;
    }
  }
  cout<<total;
}