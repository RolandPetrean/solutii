// https://www.pbinfo.ro/probleme/411/primeintreele1
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int s=0;
  for (int i=1; i<=n; ++i) {
    for (int j=i; j<=n; ++j) {
      if (__gcd(i, j)==1) ++s;
    }
  }
  cout<<s;
}