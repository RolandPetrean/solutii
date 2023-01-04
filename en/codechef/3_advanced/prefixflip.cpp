// https://www.codechef.com/problems/PREFIXFLIP
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n, k;
    string s;
    cin>>n>>k>>s;

    s = '1'+s;

    int i=1, nrz=0;
    for (i=1; i<=k; ++i) {
      if (s[i]=='0' && s[i-1]=='1') ++nrz;
    }

    int minop=2*nrz-(s[i-k]=='0');
    for (; i<=n; ++i) {
      if (s[i-k]=='0' && s[i-k+1]=='1') --nrz;
      if (s[i]=='0' && s[i-1]=='1') ++nrz;
      minop = min(minop, 2*nrz-(s[i-k+1]=='0'));
    }

    cout<<minop<<endl;
  }
}