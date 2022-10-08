// https://cses.fi/problemset/task/2168
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

bool cmp(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b) {
  return (a.second.first < b.second.first || (a.second.first == b.second.first && a.second.second > b.second.second));
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> contains(n);
  vector<int> contained(n);
  vector<pair<int,pair<int,int>>> r;
  for (int i=0; i<n; ++i) {
    int x, y;
    cin>>x>>y;
    r.push_back({i, {x, y}});
  }
  sort(r.begin(), r.end(), cmp);

  int mnrb=LONG_LONG_MAX;
  for (int i=n-1; i>=0; --i) {
    int rb=r[i].second.second;
    if (mnrb <= rb) contains[r[i].first] = 1;
    else mnrb = rb;
  }

  int mxrb=0;
  for (int i=0; i<n; ++i) {
    int rb=r[i].second.second;
    if (mxrb >= rb) contained[r[i].first] = 1;
    else mxrb = rb;
  }

  for (auto v : contains) cout<<v<<" ";
  cout<<endl;
  for (auto v : contained) cout<<v<<" ";
}