// https://www.codechef.com/problems/EXPECTEDSUM
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long

const int MOD=998244353;

int binexp(int a, int b) {
  int res=1;
  while (b) {
    if (b&1) res = res*a%MOD;
    a = a*a%MOD;
    b >>= 1;
  }
  return res;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int a, b, n;
    cin>>a>>b;
    n = a+b;

    int qinv=binexp(2*n, MOD-2);
    int p = ((n+(n&1))*a)%MOD;

    cout<<(p*qinv)%MOD<<endl;
  }
}