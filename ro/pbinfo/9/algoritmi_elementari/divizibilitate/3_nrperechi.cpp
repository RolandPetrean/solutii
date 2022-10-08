// https://www.pbinfo.ro/probleme/664/nrperechi
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  while (t--) {
    int n;
    cin>>n;

    long long s=1;
    for (int d=2; d*d<=n; ++d) {
      if (n%d==0) {
        int p=0;
        while (n%d==0) {
          ++p;
          n /= d;
        }
        s *= 2*p+1;
      }
    }
    if (n>1) s *= 3;

    cout<<s<<" ";
  }
}