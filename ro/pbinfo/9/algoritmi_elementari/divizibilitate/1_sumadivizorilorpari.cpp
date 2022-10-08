// https://www.pbinfo.ro/probleme/3270/suma-divizorilor-pari
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  long long s=0;
  for (int d=1; d*d<=n; ++d) {
    if (n%d==0) {
      if (d%2==0) s += d;
      if (n/d != d && (n/d)%2==0) s += n/d;
    }
  }
  cout<<s;
}