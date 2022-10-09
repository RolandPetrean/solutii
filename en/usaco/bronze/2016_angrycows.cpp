// http://www.usaco.org/index.php?page=viewproblem2&cpid=592
#include <bits/stdc++.h>
using namespace std;

ifstream fin("angry.in");
ofstream fout("angry.out");

int main() {
  int n;
  fin>>n;

  vector<int> x(n);
  for (int i=0; i<n; ++i) fin>>x[i];
  sort(x.begin(), x.end());

  int maxh=0;
  for (int i=0; i<n; ++i) {
    int j=i, r=1, lh=0, rh=0;
    while (j) {
      int k=j, d=x[j]-r;
      while (k && x[k-1]>=d) --k;
      if (k==j) break;

      lh += j-k;
      j = k;
      ++r;
    }

    j = i;
    r = 1;
    while (j<n) {
      int k=j, d=x[j]+r;
      while (k<n-1 && x[k+1]<=d) ++k;
      if (k==j) break;

      rh += k-j;
      j = k;
      ++r;
    }

    maxh = max(maxh, lh+rh+1);
  }
  fout<<maxh;
}