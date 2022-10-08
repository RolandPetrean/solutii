// https://cses.fi/problemset/task/1076
#include <bits/stdc++.h>
using namespace std;

#define uint unsigned long long#define endl '\n'#define mod 1000000007

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update> oset;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, k;
  cin>>n>>k;
  --k;

  vector<int> x(n);
  oset s;
  for (int i=0; i<n; ++i) {
    cin>>x[i];

    s.insert({x[i],i});
    if (i>=k) {
      cout<<(*s.find_by_order(k/2)).first<<" ";
      s.erase(s.lower_bound({x[i-k],0}));
    }
  }
}