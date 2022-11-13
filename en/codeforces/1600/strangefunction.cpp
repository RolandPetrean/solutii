// https://codeforces.com/problemset/problem/1542/C
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

#define MOD 1000000007

long long lcm(long long x, long long y) {
  return x/__gcd(x,y)*y;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    long long n;
    cin>>n;

    long long g=1, ans=0;
    for (long long i=1; g<=n; ++i) {
      g = lcm(g, i);
      if (g>n) break;
      ans += n/g;
    }
    cout<<(ans+n)%MOD<<endl;
  }
}