// https://www.pbinfo.ro/probleme/3978/sabc
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

ll s(ll a, ll b) {
  return b*(b+1)/2 - a*(a-1)/2;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll a, b, c;
  cin>>a>>b>>c;
  cout<<s(a, b)<<" "<<s(b, c)<<" "<<s(a, c);
}