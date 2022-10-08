// https://www.pbinfo.ro/probleme/63/factorizare1
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  pair<long long long long> maxi={0,0};
  long long d=2;
  while (n>1) {
    long long p=0;
    while (n%d==0) {
      n /= d;
      ++p;
    }
    if (p != 0) maxi = max(maxi, {p, d});
    ++d;
    if (d*d > n) d = n;
  }
  cout<<maxi.second;
}