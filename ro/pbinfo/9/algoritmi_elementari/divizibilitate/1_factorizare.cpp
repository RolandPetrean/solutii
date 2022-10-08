// https://www.pbinfo.ro/probleme/62/factorizare
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long d=2;
  while (n>1) {
    long long p=0;
    while (n%d==0) {
      n /= d;
      ++p;
    }
    if (p != 0) cout<<d<<" "<<p<<endl;
    ++d;
    if (d*d > n) d = n;
  }
}