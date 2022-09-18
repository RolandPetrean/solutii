// https://www.varena.ro/problema/drept
// TODO 50p
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007

ifstream fin("drept.in");
ofstream fout("drept.out");

bool cmp(pair<int,int> a, pair<int,int> b) {
  return (a.first<b.first || (a.first==b.first && a.second>b.second));
}

int main() {
  int n;
  fin>>n;

  vector<pair<int,int>> d;
  for (int i=0; i<n; ++i) {
    int l, L;
    fin>>l>>L;
    d.push_back({l, L});
  }
  sort(d.begin(), d.end(), cmp);

  int best=0;
  vector<int> dp(n,1);
  for (int i=0; i<n; ++i) {
    int maxdp=0;
    for (int j=i-1; j>=0; --j) {
      if (maxdp>j) break;
      if (d[j].second<d[i].second) maxdp = max(maxdp, dp[j]);
    }
    dp[i] += maxdp;
    best = max(best, dp[i]);
  }

  fout<<best;
}