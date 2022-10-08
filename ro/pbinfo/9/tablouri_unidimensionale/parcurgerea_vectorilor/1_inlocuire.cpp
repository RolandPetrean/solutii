// https://www.pbinfo.ro/probleme/161/inlocuire
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int ma=0, z=0;
  vector<int> v(n);
  for (int i=0; i<n; ++i) {
    cin>>v[i];
    if (v[i]==0) ++z;
    else ma += v[i];
  }
  ma /= n-z;

  for (int i=0; i<n; ++i) {
    if (v[i]==0) cout<<ma<<" ";
    else cout<<v[i]<<" ";
  }
}