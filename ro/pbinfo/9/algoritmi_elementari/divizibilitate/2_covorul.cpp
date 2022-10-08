// https://www.pbinfo.ro/probleme/2771/covorul
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, m;
  cin>>n>>m;
  cout<<min(n, m)<<" ";

  int c=0;
  while (n>1 || m>1) {
    if (n<m) {
      c += m/n;
      m -= n*(m/n);
    } else if (n>m) {
      c += n/m;
      n -= m*(n/m);
    } else if (n==m) {
      n=0;
      m=0;
      ++c;
    }
  }
  cout<<c;
}