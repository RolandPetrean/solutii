// https://cses.fi/problemset/task/1642
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

// For gp_hash_table
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, x;
  cin>>n>>x;

  vector<int> a(n);
  gp_hash_table<long long,vector<pair<int,int>>> m;

  for (int i=0; i<n; ++i) {
    cin>>a[i];
    for (int j=0; j<i; ++j) {
      int s=a[i]+a[j];
      if (s>=x) continue;
      if (m.find(x-s) != m.end()) {
        for (auto p : m[x-s]) {
          if (i != j && i != p.first && i != p.second && j != p.first && j != p.second) {
            cout<<i+1<<" "<<j+1<<" "<<p.first+1<<" "<<p.second+1;
            return 0;
          }
        }
      } else m[s].push_back({i, j});
    }
  }
  cout<<"IMPOSSIBLE";
}