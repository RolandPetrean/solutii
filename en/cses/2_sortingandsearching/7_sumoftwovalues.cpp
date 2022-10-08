// https://cses.fi/problemset/task/1640
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, x, m;
  cin>>n>>x;

  vector<pair<int,int>> a;
  for (int i=0; i<n; i++) {
    cin>>m;
    a.push_back({m, i+1}); // Store value with index
  }
  sort(a.begin(), a.end());

  // Search for sum with two pointers
  int i=0, j=n-1;
  while (i < j) {
    int s = a[i].first + a[j].first;
    if (s == x) {
      cout<<a[i].second<<" "<<a[j].second;
      return 0;
    } else if (s < x) i++;
    else j--;
  }
  cout<<"IMPOSSIBLE";
}