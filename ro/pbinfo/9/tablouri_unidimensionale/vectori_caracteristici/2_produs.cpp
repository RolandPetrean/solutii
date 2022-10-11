// https://www.pbinfo.ro/probleme/1010/produs
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, p, m;
  cin>>n>>p;

  array<int,10001> a{}, b{};
  for (int i=0; i<n; ++i) {
    int x;
    cin>>x;
    ++a[x];
  }
  cin>>m;
  for (int i=0; i<m; ++i) {
    int x;
    cin>>x;
    ++b[x];
  }

  int cnt=0;
  for (int i=0; i<10001; ++i) {
    for (int j=0; j<10001 && i*j<p; ++j) {
      cnt += a[i]*b[j];
    }
  }

  cout<<cnt;
}