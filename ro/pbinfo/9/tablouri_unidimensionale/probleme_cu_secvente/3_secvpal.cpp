// https://www.pbinfo.ro/probleme/310/secvpal
#include <bits/stdc++.h>
using namespace std;

ifstream fin("secvpal.in");
ofstream fout("secvpal.out");

int main() {
  int n;
  fin>>n;

  vector<int> v(n);
  for (int i=0; i<n; ++i) fin>>v[i];

  int maxst=0, maxdr=0;
  for (int i=0; i<n; ++i) {
    for (int j=i+1; j<n; ++j) {
      bool p=true;
      for (int k=0; k<(j-i+1)/2 && p; ++k) {
        if (v[i+k] != v[j-k]) p = false;
      }

      if (p && j-i+1 > maxdr-maxst+1) {
        maxst = i;
        maxdr = j;
      }
    }
  }

  fout<<maxst+1<<" "<<maxdr+1;
}