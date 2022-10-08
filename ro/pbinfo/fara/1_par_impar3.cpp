// https://www.pbinfo.ro/probleme/3253/par-impar3
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long maxi=0, minp=10;
  while (n) {
    if (n%10&1) maxi = max(maxi, n%10);
    else minp = min(minp, n%10);
    n /= 10;
  }
  cout<<maxi + minp;
}