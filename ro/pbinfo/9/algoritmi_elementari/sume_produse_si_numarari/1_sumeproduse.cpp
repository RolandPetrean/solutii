// https://www.pbinfo.ro/probleme/1030/sumeproduse
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  vector<long long> e(n);
  for (int i=0; i<n; ++i) cin>>e[i];

  long long s=0, s2=0;
  for (int i=0; i<n/2; ++i) s += e[i];
  for (int i=n/2; i<n; ++i) s2 += e[i];
  cout<<s*s2;
}