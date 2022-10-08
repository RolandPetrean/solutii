// https://www.pbinfo.ro/probleme/618/inaltimi
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  long long n;
  cin>>n;

  vector<pair<long long long long>> e;
  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;
    e.push_back({x, i+1});
  }
  sort(e.begin(), e.end());

  for (auto v : e) cout<<v.second<<" ";
}