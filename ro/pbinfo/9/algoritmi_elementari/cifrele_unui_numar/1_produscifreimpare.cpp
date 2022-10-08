// https://www.pbinfo.ro/probleme/65/produscifreimpare
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  bool k=false;
  long long s = 1;
  while (n) {
    if ((n%10)&1) {
      k = true;
      s *= n%10;
    }
    n /= 10;
  }
  if (k) cout<<s;
  else cout<<-1;
}