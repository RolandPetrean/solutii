// https://www.pbinfo.ro/probleme/68/ciframaxima
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll maxi=0;
  while (n > 0) {
    maxi = max(maxi, n%10);
    n /= 10;
  }
  cout<<maxi;
}