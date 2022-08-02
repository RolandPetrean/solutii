// https://www.pbinfo.ro/probleme/45/verifprim
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  if (n==0 || n==1) n=4;
  for (ll i=2; i*i<=n; i++) {
    if (n%i == 0) {
      cout<<"NU";
      return 0;
    }
  }
  cout<<"DA";
}