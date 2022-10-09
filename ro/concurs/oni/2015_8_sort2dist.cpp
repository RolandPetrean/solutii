// https://www.pbinfo.ro/probleme/1225/sort2dist
#include <bits/stdc++.h>
using namespace std;

ifstream fin("sort2dist.in");
ofstream fout("sort2dist.out");

bool cmp(string a, string b) {
  if (a.size() == b.size()) return a<b;
  return a.size()<b.size();
}

int main() {
  int n;
  fin>>n;

  vector<string> c(n);
  for (int i=0; i<n; ++i) fin>>c[i];

  vector<string> sc=c;
  sort(sc.begin(), sc.end(), cmp);
  for (int i=0; i<n; ++i) cout<<sc[i]<<" ";

  vector<pair<int,int>> inter{};
  for (int i=0; i<n; ++i) {
    if (c[i] == sc[i]) continue;

    int j;
    for (j=i; j<n && c[j] != sc[i]; ++j) {}

    int p=512, cnt=0;
    while (c[i] != sc[i] && p) {
      if (j-p>=i) {
        swap(c[j-p], c[j]);
        inter.push_back({j-p, j});
        j = j-p;
        ++cnt;
      }
      p /= 2;
    }

    if (cnt<2) continue;

    for (int k=inter.size()-2; k>=(int) inter.size()-cnt; --k) {
      swap(c[inter[k].first], c[inter[k].second]);
      inter.push_back(inter[k]);
    }
  }

  fout<<inter.size()<<endl;
  for (pair<int,int> ij:inter) fout<<ij.first+1<<" "<<ij.second+1<<endl;
}