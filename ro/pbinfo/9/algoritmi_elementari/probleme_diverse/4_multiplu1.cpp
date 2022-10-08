// https://www.pbinfo.ro/probleme/746/multiplu1
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, k;
  cin>>n>>k;

  long long s=1;
  for (int d=2; d*d<=n; ++d) {
    if (n%d==0) {
      int p=0;
      while (n%d==0) {
        ++p;
        n /= d;
      }
      s *= 2*p+1;
      s %= 10000;
    }
  }
  if (n>1) s *= 2+1;

  cout<<s%10000;
}