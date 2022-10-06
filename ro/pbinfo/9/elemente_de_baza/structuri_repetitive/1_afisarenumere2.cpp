// https://www.pbinfo.ro/probleme/3231/afisarenumere2
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
  for (ll i=1; i<=n; ++i) cout<<i<<" ";
  for (ll i=n; i>0; --i) cout<<i<<" ";
}