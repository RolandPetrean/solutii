// https://www.pbinfo.ro/probleme/2921/sumesecv1
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m;
  cin>>n;

  vector<int> s(n+1);
  for (int i=1; i<=n; ++i) {
    cin>>s[i];
    s[i] += s[i-1];
  }

  int maxi=INT_MIN;
  cin>>m;
  while (m--) {
    int i, j;
    cin>>i>>j;
    if (i>j) swap(i, j);
    maxi = max(maxi, s[j]-s[i-1]);
  }

  cout<<maxi;
}