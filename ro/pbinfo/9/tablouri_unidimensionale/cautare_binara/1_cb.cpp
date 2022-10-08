// https://www.pbinfo.ro/probleme/2276/cb
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, t;
  cin>>n>>t;

  vector<long long> a(n);
  for (int i=0; i<n; ++i) cin>>a[i];
  sort(a.begin(), a.end());

  for (int i=0; i<t; ++i) {
    long long x, y;
    cin>>x>>y;

    auto e = distance(lower_bound(a.begin(), a.end(), x), upper_bound(a.begin(), a.end(), y));
    if (e>0) cout<<e<<endl;
    else cout<<0<<endl;
  }
}