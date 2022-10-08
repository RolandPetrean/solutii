// https://www.pbinfo.ro/probleme/2220/difmax
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  vector<int> v(n);
  for (int i=0; i<n; ++i) cin>>v[i];

  vector<int> maxim(n);
  maxim[0] = v[0];
  for (int i=1; i<n; ++i) maxim[i] = max(maxim[i-1], v[i]);

  int maxdif=INT_MIN;
  for (int i=1; i<n; ++i) maxdif = max(maxdif, maxim[i-1]-v[i]);
  cout<<maxdif;
}