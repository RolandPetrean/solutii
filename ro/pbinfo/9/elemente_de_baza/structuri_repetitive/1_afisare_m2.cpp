// https://www.pbinfo.ro/probleme/3984/afisare-m2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll a, b;
  cin>>a>>b;
  for (ll i=a; i<=a*b; i+=a) cout<<i<<" ";
}