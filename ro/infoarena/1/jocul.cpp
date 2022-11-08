// https://infoarena.ro/problema/jocul
#include <bits/stdc++.h>
using namespace std;

ifstream fin("jocul.in");
ofstream fout("jocul.out");

int main() {
  int n;
  fin>>n;

  int sum=0;
  vector<int> a(n+1);
  for (int i=1; i<=n; ++i) {
    fin>>a[i];
    sum += a[i];
  }

  vector<int> dp(sum+1);
  dp[0] = true;
  for (int i=1; i<=n; ++i) {
    for (int j=sum; j>=0; --j) {
      if (a[i]<=j) dp[j] |= dp[j-a[i]];
    }
  }

  for (int i=sum/2; i>=0; --i) {
    if (dp[i]) {
      fout<<i<<" "<<sum-i;
      return 0;
    }
  }
}