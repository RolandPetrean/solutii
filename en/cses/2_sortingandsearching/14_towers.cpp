// https://cses.fi/problemset/task/1073
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin>>n;

  multiset<int> t;
  for (int i=0; i<n; i++) {
    int k;
    cin>>k;
    
    auto it = t.upper_bound(k);
    if (it != t.end()) t.erase(it); // Erase old top value
    t.emplace(k); // Add new top value or tower
  }
  cout<<t.size();
}