// https://cses.fi/problemset/task/1163
// https://usaco.guide/problems/cses-1163-traffic-lights/solution
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int x, n;
  cin>>x>>n;

  multiset<int> ps{0, x}, g{x}; // ps stores light locations, gs stores the gaps
  for (int i=0; i<n; i++) {
    int p;
    cin>>p;
    
    auto r = ps.upper_bound(p); // Find upper bound of the gap the light is placed in
    auto l = r;
    --l; // Lower bound

    // Erase the large gap and add the two new split gaps
    g.erase(g.find(*r-*l));
    g.emplace(p-*l);
    g.emplace(*r-p);
    ps.emplace(p); // Add the new light

    // Sets are sorted, the last element is the biggest
    auto m = g.end();
    --m;
    cout<<*m<<" ";
  }
}