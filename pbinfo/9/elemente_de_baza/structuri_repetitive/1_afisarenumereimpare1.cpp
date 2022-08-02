// https://www.pbinfo.ro/probleme/3233/afisarenumereimpare1
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
  if (n%2==0) --n;
  for (ll i=n; i>0; i-=2) cout<<i<<" ";
}