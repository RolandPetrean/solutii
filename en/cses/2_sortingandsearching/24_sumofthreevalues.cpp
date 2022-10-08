// https://cses.fi/problemset/task/1641
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, x;
  cin>>n>>x;

  vector<pair<int,int>> a;
  for (int i=0; i<n; ++i) {
    int t;
    cin>>t;
    a.push_back({t, i});
  }
  sort(a.begin(), a.end());

  for (int i=0; i<n; ++i) {
    int l=0, r=n-1;
    while (l < r) {
      if (a[l].first + a[r].first + a[i].first == x && i != l && i != r) {
        cout<<a[l].second+1<<" "<<a[r].second+1<<" "<<a[i].second+1;
        return 0;
      }
      if (a[l].first+a[r].first >= x-a[i].first) --r;
      else ++l;
    }
  }
  cout<<"IMPOSSIBLE";
}