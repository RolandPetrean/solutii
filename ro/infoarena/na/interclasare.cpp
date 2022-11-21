// https://infoarena.ro/problema/interclasare
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("interclasare.in");
ofstream fout("interclasare.out");

int scmax(int n, vector<int>& a, vector<int>& dp, vector<int>& prev) {
  int maxidx=0;
  vector<int> lg(n+1, n+1);
  a[n+1] = INT_MAX;
  a[0] = 0;
  lg[0] = 0;

  for (int i=1; i<=n; ++i) {
    int l=0, r=n, res=0;
    while (l <= r) {
      int mid=(l+r)/2;
      if (a[lg[mid]]<=a[i]) {
        res = mid;
        l = mid+1;
      } else r = mid-1;
    }

    ++res;
    dp[i] = res;
    prev[i] = lg[res-1];
    if (a[i]<a[lg[res]]) lg[res] = i;
    if (dp[i]>dp[maxidx]) maxidx = i;
  }
  return maxidx;
}

int main() {
  int n, m;
  fin>>n;
  vector<int> a(n+2);
  for (int i=1; i<=n; ++i) fin>>a[i];
  fin>>m;
  vector<int> b(m+2);
  for (int i=1; i<=m; ++i) fin>>b[i];

  vector<int> dpa(n+1), preva(n+1, -1), dpb(m+1), prevb(m+1, -1);
  int maxa=scmax(n, a, dpa, preva), maxb=scmax(m, b, dpb, prevb);
  fout<<dpa[maxa]+dpb[maxb]<<endl;

  vector<pair<int,int>> c;
  int i=maxa, j=maxb;
  while (i>0 && j>0) {
    if (a[i]>b[j]) {
      c.push_back({a[i], 1});
      i = preva[i];
    } else {
      c.push_back({b[j], 2});
      j = prevb[j];
    }
  }
  while (i>0) {
    c.push_back({a[i], 1});
    i = preva[i];
  }
  while (j>0) {
    c.push_back({b[j], 2});
    j = prevb[j];
  }
  reverse(c.begin(), c.end());

  int l=1, r=1;
  for (int x=0; x<c.size(); ++x) {
    if (c[x].second == 1) {
      while (a[l] != c[x].first) fout<<a[l++]<<" ";
      fout<<a[l++]<<" ";
    } else {
      while (b[r] != c[x].first) fout<<b[r++]<<" ";
      fout<<b[r++]<<" ";
    }
  }
  while (l<=n) fout<<a[l++]<<" ";
  while (r<=m) fout<<b[r++]<<" ";
}