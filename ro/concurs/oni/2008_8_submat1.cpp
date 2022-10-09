// https://www.pbinfo.ro/probleme/2412/submat1
#include <bits/stdc++.h>
using namespace std;

ifstream fin("submat1.in");
ofstream fout("submat1.out");

int main() {
  int n, m;
  fin>>n>>m;

  vector<int> z(n);
  for (int i=0; i<n; ++i) {
    for (int j=0; j<m; ++j) {
      int x;
      fin>>x;
      if (x==0) ++z[i];
    }
  }
  sort(z.begin(), z.end(), greater<int>());

  int maxi=0;
  for (int i=0; i<n; ++i) maxi = max(maxi, (i+1)*z[i]);
  fout<<maxi;
}