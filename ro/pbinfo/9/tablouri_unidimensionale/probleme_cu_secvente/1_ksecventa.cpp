// https://www.pbinfo.ro/probleme/521/ksecventa
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, k;
  cin>>n>>k;

  vector<int> v(n);
  for (int i=0; i<n; ++i) cin>>v[i];

  int s=n/k;
  for (int i=0; i<k; ++i) {
    for (int j=i+1; j<k; ++j) {
      bool ok=true;
      for (int p=0; p<s && ok; ++p) {
        if (v[p+(i*s)] != v[p+(j*s)]) ok = false;
      }

      if (ok) {
        cout<<i+1<<" "<<j+1;
        return 0;
      }
    }
  }
}