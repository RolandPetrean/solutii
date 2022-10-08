// https://www.pbinfo.ro/probleme/658/sumalinii
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n, m;
  cin>>n>>m;
  for (int i=0; i<n; i++) {
    long long x, s=0;
    for (int i=0; i<m; i++) {
      cin>>x;
      s += x;
    }
    cout<<s<<" ";
  }
}