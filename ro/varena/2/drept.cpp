// https://www.varena.ro/problema/drept
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

ifstream fin("drept.in");
ofstream fout("drept.out");
	
bool cmp(pair<int,int> a, pair<int,int> b) {
  return (a.first<b.first || (a.first==b.first && a.second>b.second));
}

int main() {
  int n;
  fin>>n;

  vector<pair<int,int>> d(n+2);
  d[n+1] = {INT_MAX, INT_MAX};
  d[0] = {INT_MIN, INT_MIN};
  for (int i=1; i<=n; ++i) {
    int l, L;
    fin>>l>>L;
    d[i] = {l, L};
  }
  sort(d.begin()+1, d.end(), cmp);

  int best=0;
  vector<int> lg(n+1, n+1), dp(n+1);
  lg[0] = 0;
  for (int i=1; i<=n; ++i) {
    int l=0, r=n, res=0;
    while (l <= r) {
      int mid=(l+r)/2;
      if (d[lg[mid]].second<d[i].second) {
        l = mid+1;
        res = mid;
      } else r = mid-1;
    }

    ++res;
    dp[i] = res;
    if (d[i].second<d[lg[res]].second) lg[res] = i;
    best = max(best, dp[i]);
  }
  fout<<best;
}