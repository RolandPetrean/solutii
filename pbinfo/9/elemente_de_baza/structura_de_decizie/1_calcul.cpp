// https://www.pbinfo.ro/probleme/451/calcul
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;
  if (n <= 15) cout<<n*n;
  else if (n <= 30) cout<<n%10+n/10%10;
  else cout<<n%10*(n/10%10);
}