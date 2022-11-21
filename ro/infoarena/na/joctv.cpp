// https://www.infoarena.ro/problema/joctv
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("joctv.in");
ofstream fout("joctv.out");

int main() {
  int n;
  fin>>n;
  
  vector<vector<int>> a(n, vector<int>(n));
  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      fin>>a[i][j];
      if (i) a[i][j] += a[i-1][j];
    }
  }

  int maxsum=0;
  for (int i=0; i<n; ++i) {
    for (int j=i; j<n; ++j) {
      int sum=0;
      for (int k=0; k<n; ++k) {
        int curr=a[j][k];
        if (i) curr -= a[i-1][k];
        sum = max(sum+curr, curr);
        maxsum = max(maxsum, sum);
      }
    }
  }

  fout<<maxsum;
}