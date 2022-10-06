// https://www.pbinfo.ro/probleme/1673/cmmdc1
#include <bits/stdc++.h>
using namespace std;

ifstream fin("cmmdc1.in");
ofstream fout("cmmdc1.out");

int freq[1000001];

int main() {
  int n, k;
  fin>>n>>k;

  int maxi=0;
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    ++freq[x];
    maxi = max(maxi, x);
  }

  for (int i=maxi; i>=1; --i) {
    vector<int> nr;
    for (int j=maxi/i; j>=1; --j) {
      for (int f=0; f<freq[i*j]; ++f) {
        nr.push_back(i*j);
      }
      if (nr.size()==k) break;
    }
    if (nr.size()>=k) {
      fout<<i<<endl;
      for (int j=0; j<k; ++j) fout<<nr[j]<<" ";
      return 0;
    }
  }
}