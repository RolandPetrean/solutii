// https://cses.fi/problemset/task/2162
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

// For ordered set
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> oset;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int i=0;
  oset c;
  for (int i=0; i<n; ++i) c.insert(i+1);
  while (c.size()>0) {
    ++i;
    i %= c.size();
    int e=*c.find_by_order(i);
    cout<<e<<" ";
    c.erase(e);
  }
}