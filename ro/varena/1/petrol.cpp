// https://www.nerdarena.ro/problema/petrol
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("petrol.in");
ofstream fout("petrol.out");

int main() {
  int n, m;
  fin>>n>>m;

  vector<vector<int>> s(n+2, vector<int>(m+2));
  for (int i=1; i<=n; ++i) {
    for (int j=1; j<=m; ++j) {
      fin>>s[i][j];
      s[i][j] += s[i-1][j] + s[i][j-1] - s[i-1][j-1];
    }
  }

  int q;
  fin>>q;
  while (q--) {
    int x;
    fin>>x;

    int maxp=INT_MIN, l=0, c=0;
    for (int i=1; i<=n-x+1; ++i) {
      for (int j=1; j<=m-x+1; ++j) {
        int curr=s[i+x-1][j+x-1] - s[i-1][j+x-1] - s[i+x-1][j-1] + s[i-1][j-1];
        if (curr>maxp) {
          maxp = curr;
          l = i; c = j;
        }
      }
    }

    fout<<maxp<<" "<<l<<" "<<c<<endl;
  }
}