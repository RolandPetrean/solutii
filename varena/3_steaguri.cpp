// https://www.varena.ro/problema/steaguri
// TODO 85p
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 1000000007
 
ifstream fin("steaguri.in");
ofstream fout("steaguri.out");
 
vector<short> add(vector<short> a, vector<short> b) {
  if (a.size()<b.size()) swap(a, b);

  vector<short> res;
  int i=a.size()-1, j=b.size()-1, c=0;
  while (i>=0 || j>=0) {
    int t=a[i]+c;
    if (j>=0) t += b[j];
    c=t/10%10;
    res.push_back(t%10);

    --i; --j;
  }
  if (c) res.push_back(1);
  reverse(res.begin(), res.end());
  return res;
}
 
int main() {
  int n;
  fin>>n;
 
  vector<vector<vector<short>>> dp(2, vector<vector<short>>(3));
  dp[1][0] = dp[1][1] = {1};
  for (int i=2; i<=n; ++i) {
    auto dpc=dp;
    int x=i%2;
    dpc[x][0] = add(dp[1-x][1], dp[x][1]);
    dpc[x][1] = add(dp[1-x][0], dp[x][0]);
    dpc[x][2] = add(dp[1-x][0],dp[1-x][1]);
    dp=dpc;
  }
  vector<short> res=add(dp[n%2][0], dp[n%2][1]);
  for (int v:res) fout<<v;
}