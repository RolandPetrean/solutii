// https://www.pbinfo.ro/probleme/1048/schi
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("schi.in");
ofstream fout("schi.out");

bool cmp(pair<int,int> x, int y) {
  return x.first < y;
}

int main() {
  int n, k;
  fin>>n;

  vector<pair<int,int>> w;
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;

    if (w.size() > 0 && x > w[w.size()-1].first) {
      w[w.size()-1].second = i-w[w.size()-1].second;
      w.push_back({x, i});
    } else if (w.size() == 0) w.push_back({x, i});
  }
  w[w.size()-1].second = n-w[w.size()-1].second;

  for (auto v : w) cout<<v.first<<" : "<<v.second<<endl;

  fin>>k;
  for (int i=0; i<k; ++i) {
    int x;
    fin>>x;

    auto it = lower_bound(w.begin(), w.end(), x, cmp);
    int d=it-w.begin();
    if (w[d].first == x) fout<<w[d].second<<" ";
    else fout<<0<<" ";
  }
}