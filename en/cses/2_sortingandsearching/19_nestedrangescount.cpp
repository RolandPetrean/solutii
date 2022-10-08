// https://cses.fi/problemset/task/2169
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<pair<int,int>,null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update> oset;

bool cmp(pair<long long,pair<int,int>> a, pair<long long,pair<int,int>> b) {
  return (a.second.first < b.second.first || (a.second.first == b.second.first && a.second.second > b.second.second));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> contains(n);
  vector<int> contained(n);
  vector<pair<long long,pair<int,int>>> r;
  for (int i=0; i<n; ++i) {
    int x, y;
    cin>>x>>y;
    r.push_back({i, {x, y}});
  }
  sort(r.begin(), r.end(), cmp);

  oset csrb;
  for (int i=n-1; i>=0; --i) {
    int rb=r[i].second.second;
    pair<int,int> p{rb, -i};
    csrb.insert(p);
    contains[r[i].first] = csrb.order_of_key(p);
  }

  oset cnrb;
  for (int i=0; i<n; ++i) {
    int rb=r[i].second.second;
    pair<int,int> p{rb, -i};
    cnrb.insert(p);
    contained[r[i].first] = cnrb.size()-cnrb.order_of_key(p)-1;
  }

  for (auto v : contains) cout<<v<<" ";
  cout<<endl;
  for (auto v : contained) cout<<v<<" ";
}