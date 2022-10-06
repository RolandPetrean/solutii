// https://www.pbinfo.ro/probleme/348/afisareputeri
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, p;
  cin>>n>>p;

  ll x=1;
  while (x<=p) {
    cout<<x<<" ";
    x *= n;
  }
}