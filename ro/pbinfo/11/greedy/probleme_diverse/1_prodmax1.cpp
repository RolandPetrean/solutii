// https://www.pbinfo.ro/probleme/2271/prodmax1
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  vector<long long> e(n);
  for (int i=0; i<n; ++i) cin>>e[i];
  sort(e.begin(), e.end(), greater<long long>());
  
  long long p = max(e[0] * e[1], e[n-1] * e[n-2]);
  cout<<p;
}