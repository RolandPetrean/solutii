// https://www.pbinfo.ro/probleme/3983/afisare-m1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, m;
  cin>>n>>m;
  for (ll i=n*m; i>=m; i-=m) cout<<i<<" ";
}