// https://www.pbinfo.ro/probleme/3663/ppdp
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  for (int i=2; i*i<=n; ++i) {
    if (n%i==0) {
      cout<<i*i;
      break;
    }
  }
}