// https://www.pbinfo.ro/probleme/332/expresie2
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
  
  ll s=0;
  for (ll i=1; i<=n; ++i) {
    s += i*(i+1);
  }
  cout<<"Rezultatul este "<<s;
}