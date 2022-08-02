// https://www.pbinfo.ro/probleme/50/expresie
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll fact(ll n) {
  if (n == 0) return 1;
  return n * fact(n-1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll s=0;
  for (ll i=1; i<=n; i++) {
    s += fact(i);
  }
  cout<<"Rezultatul este "<<s;
}