// https://cses.fi/problemset/task/1630
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<pair<int,int>> t;
  for (int i=0; i<n; ++i) {
    int a, d;
    cin>>a>>d;
    t.push_back({a, d});
  }
  sort(t.begin(), t.end());

  int r=0, e=0;
  for (int i=0; i<n; ++i) {
    e += t[i].first;
    r += t[i].second - e;
  }
  cout<<r;
}