// https://www.pbinfo.ro/probleme/3358/gama
#include <bits/stdc++.h>
using namespace std;

ifstream fin("gama.in");
ofstream fout("gama.out");

int main() {
  int n, k;
  fin>>n>>k;

  vector<int> v(n);
  for (int i=0; i<n; ++i) fin>>v[i];

  for (int i=0; i<n && k; ++i) {
    pair<int,int> mini{v[i],i};
    for (int j=i+1; j<n && j<=i+k; ++j) mini = min(mini, {v[j],j});
    
    k -= mini.second-i;
    for (int j=mini.second; j>i; --j) swap(v[j], v[j-1]);
  }

  for (int i=0; i<n; ++i) fout<<v[i]<<" ";
}