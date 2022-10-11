// https://www.pbinfo.ro/probleme/244/cifreord
#include <bits/stdc++.h>
using namespace std;

ifstream fin("cifreord.in");
ofstream fout("cifreord.out");

int main() {
  int n;
  fin>>n;
  
  array<int,10> cifre{};
  for (int i=0; i<n; ++i) {
    int x;
    fin>>x;
    ++cifre[x];
  }

  int k=0;
  for (int i=0; i<10; ++i) {
    for (int j=0; j<cifre[i]; ++j) {
      fout<<i<<" ";

      ++k;
      if (k==20) {
        fout<<endl;
        k = 0;
      }
    }
  }
}