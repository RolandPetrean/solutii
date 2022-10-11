// https://www.pbinfo.ro/probleme/134/secvk
#include <bits/stdc++.h>
using namespace std;

ifstream fin("secvk.in");
ofstream fout("secvk.out");

int main() {
  int n, k;
  fin>>n>>k;

  vector<int> v(n);
  for (int i=0; i<n; ++i) fin>>v[i];

  int s=0;
  for (int i=0; i<k; ++i) s += v[i];

  pair<pair<int,int>,int> maxs={{0,k-1},s};
  for (int i=k; i<n; ++i) {
    s = s-v[i-k]+v[i];
    if (s>maxs.second) maxs = {{i-k+1, i},s};
  }

  for (int i=maxs.first.first; i<=maxs.first.second; ++i) fout<<v[i]<<" ";
}