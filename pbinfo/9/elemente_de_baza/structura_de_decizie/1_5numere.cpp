// https://www.pbinfo.ro/probleme/559/5numere
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  vector<ll> x(5);
  for (ll i=0; i<5; ++i) cin>>x[i];
  sort(x.begin(), x.end(), greater<ll>());
  cout<<x[0]+x[1]+x[2];
}