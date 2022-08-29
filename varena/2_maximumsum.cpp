// https://www.varena.ro/problema/maximumsum
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("maximumsum.in");
ofstream fout("maximumsum.out");

int main() {
  int n;
  fin>>n;

  vector<vector<int>> v(n, vector<int>(n)), s(n, vector<int>(n));
  for (int i=0; i<n; ++i) {
    for (int j=0; j<n; ++j) {
      fin>>v[i][j];
      s[i][j] = v[i][j];
      if (j>0) s[i][j] += s[i][j-1];
    }
  }

  int maxs=-INT_MAX;
  for (int i=0; i<n; ++i) {
    for (int j=i; j<n; ++j) {
      vector<int> a(n);
      for (int k=0; k<n; ++k) {
        int t=s[k][j];
        if (i>0) t -= s[k][i-1];
        a[k] = t;
      }

      int curr=a[0];
      for (int l=1; l<n; ++l) {
        if (curr<0) curr=0;
        curr += a[l];
        if (curr>maxs) maxs = curr;
      }
    }
  }
  fout<<maxs;
}