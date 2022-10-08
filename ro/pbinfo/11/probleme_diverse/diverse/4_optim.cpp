// https://www.pbinfo.ro/probleme/1760/optim
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("optim.in");
ofstream fout("optim.out");

int main() {
  int n, k;
  fin>>n>>k;

  vector<long long> x(n);
  for (int i=0; i<n; ++i) fin>>x[i];

  // maxi[i][j] - maximul format din primele i+1 numere cu j inmultiri
  // mini[i][j] - minimul format din primele i+1 numere cu j inmultiri
  vector<vector<int>> maxi(n, vector<int>(k+1)), mini(n, vector<int>(k+1));

  for (int i=0; i<n; ++i) {
    for (int j=0; j<=i && j<=k; ++j) {
      if (i==j) {
        maxi[i][j] = 1;
        for (int v=0; v<=i; ++v) maxi[i][j] *= x[v];
        mini[i][j] = maxi[i][j];
      } else {
        maxi[i][j] = -INT_MAX;
        mini[i][j] = INT_MAX;
        for (int m=0; m<=j; ++m) {
          int mult=1;
          for (int v=i-m; v<=i; ++v) mult *= x[v];
          maxi[i][j] = max(maxi[i][j], maxi[i-m-1][j-m]+mult);
          mini[i][j] = min(mini[i][j], mini[i-m-1][j-m]+mult);
        }
      }
      cout<<maxi[i][j]<<" ";
    }
    cout<<endl;
  }

  fout<<mini[n-1][k]<<" "<<maxi[n-1][k];
}