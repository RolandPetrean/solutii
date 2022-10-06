// https://www.pbinfo.ro/probleme/377/difimin
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  for (int i=sqrt(n); i>=1; --i) {
    if (n%i==0) {
      cout<<i<<" "<<n/i;
      break;
    }
  }
}