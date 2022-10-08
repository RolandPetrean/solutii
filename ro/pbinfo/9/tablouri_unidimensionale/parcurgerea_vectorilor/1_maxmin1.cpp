// https://www.pbinfo.ro/probleme/278/maxmin1
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m;
  cin>>n;
  vector<int> a(n);
  for (int i=0; i<n; ++i) cin>>a[i];
  cin>>m;
  vector<int> b(m);
  for (int i=0; i<m; ++i) cin>>b[i];

  int cnt=0;
  for (int i=0; i<n; ++i) {
    bool big=true;
    for (int j=0; j<m; ++j) {
      if (b[j]>=a[i]) {
        big=false;
        break;
      }
    }
    if (big) ++cnt;
  }

  cout<<cnt;
}