// https://www.pbinfo.ro/probleme/3253/par-impar3
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll maxi=0, minp=10;
  while (n) {
    if (n%10&1) maxi = max(maxi, n%10);
    else minp = min(minp, n%10);
    n /= 10;
  }
  cout<<maxi + minp;
}