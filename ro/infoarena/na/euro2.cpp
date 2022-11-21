// https://infoarena.ro/problema/euro2
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("euro2.in");
ofstream fout("euro2.out");

int n;


vector<int> scmax(vector<double>& a) {
  vector<int> lg(n+1, n+1), dp(n+1);
  lg[0] = 0;

  for (int i=1; i<=n; ++i) {
    int l=0, r=n, res=0;
    while (l <= r) {
      int mid = (l+r)/2;
      if (a[lg[mid]]<a[i]) {
        l = mid+1;
        res = mid;
      } else r=mid-1;
    }

    ++res;
    dp[i] = res;
    if (a[i]<a[lg[res]]) lg[res] = i;
  }

  return dp;
}

int main() {
  fin>>n;

  vector<double> a(n+2);
  a[n+1] = 5;
  for (int i=1; i<=n; ++i) fin>>a[i];
  
  auto dp1=scmax(a);
  reverse(a.begin()+1, a.end()-1);
  auto dp2=scmax(a);
  reverse(dp2.begin()+1, dp2.end());

  int maxi=0;
  for (int i=1; i<=n; ++i) {
    if (dp1[i]>=2 && dp2[i] >= 2) maxi = max(maxi, dp1[i]+dp2[i]-1);
  }
  fout<<maxi;
}