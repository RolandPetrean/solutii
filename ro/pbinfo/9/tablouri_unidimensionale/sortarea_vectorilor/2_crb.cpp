// https://www.pbinfo.ro/probleme/605/crb
#include <bits/stdc++.h>
using namespace std;

ifstream fin("crb.in");
ofstream fout("crb.out");

int main() {
  int n;
  fin>>n;

  vector<pair<int,int>> v;
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    v.push_back({x,i});
  }
  sort(v.begin(), v.end(), greater<pair<int,int>>());

  int cnt=0;
  for (int i=0; i<n; ++i) {
    if (v[i].second == i) ++cnt;
  }

  fout<<cnt;
}