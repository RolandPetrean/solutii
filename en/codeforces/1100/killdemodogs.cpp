// https://codeforces.com/contest/1731/problem/B
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

#define int long long
const int MOD = 1000000007;
const int MODINV6=166666668;

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;
  while (t--) {
    int n;
    cin>>n;

    int sp=(((n*(n-1))%MOD * (2*n-1))%MOD * MODINV6)%MOD;
    int sn=n*(n-1)/2;
    int s=2*sp + sn + n*n;

    cout<<(2022*(s%MOD))%MOD<<endl;
  }
}