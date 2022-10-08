// https://www.pbinfo.ro/probleme/1340/rucsac
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool cmp(pair<long long long long> a, pair<long long long long> b) {
  return (double) a.first / (double) a.second > (double) b.first / (double) b.second;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, gmax;
  cin>>n>>gmax;

  vector<pair<long long long long>> o;
  for (int i=0; i<n; ++i) {
    long long g, v;
    cin>>g>>v;
    o.push_back({v, g});
  }

  double total=0;
  sort(o.begin(), o.end(), cmp);
  for (int i=0; i<n; ++i) {
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