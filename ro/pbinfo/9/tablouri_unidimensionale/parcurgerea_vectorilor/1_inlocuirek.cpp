// https://www.pbinfo.ro/probleme/383/inlocuirek
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int k, n;
  cin>>k>>n;

  vector<int> v(n);
  for (int i=0; i<n; ++i) {
    int x;
    cin>>x;
    if (abs(x-k*(x/k))<=abs(x-k*(1+x/k))) v[i] = k*(x/k);
    else v[i] = k*(1+x/k);
  }
  
  for (int i=n-1; i>=0; --i) cout<<v[i]<<" ";
}