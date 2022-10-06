// https://www.pbinfo.ro/probleme/47/sumapatrate
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  cout<<"Rezultatul este "<<n*(n+1)*(2*n+1)/6;
}