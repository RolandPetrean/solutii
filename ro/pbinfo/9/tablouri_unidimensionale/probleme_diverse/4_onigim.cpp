// https://www.pbinfo.ro/probleme/1147/onigim
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("onigim.in");
ofstream fout("onigim.out");

int main() {
  int n, k;
  fin>>n>>k;

  vector<int> p(k);
  for (int i=0; i<k; ++i) fin>>p[i];

  map<int,vector<int>> a{};
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    a[x].push_back(i);
  }

  vector<int> e(n);
  int j=k-1, d=0, maxi=0;
  for (int i=n; i>=0; --i) {
    if (a[i].size()>0) {
      for (auto v : a[i]) e[v]=p[j];
      maxi = max(maxi, (int) a[i].size());
      if (j>k-4) d += a[i].size();
      --j;
    }
  }
  
  for (auto v : e) fout<<v<<" ";
  fout<<endl<<d<<endl<<maxi;
}