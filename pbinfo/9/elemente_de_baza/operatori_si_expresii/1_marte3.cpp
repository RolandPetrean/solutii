// https://www.pbinfo.ro/probleme/3181/marte3
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ll n, m, p;
  cin>>n>>m>>p;

  ll s = m * n;
  cout<<p/s<<endl;
  p -= (p/s)*s;
  cout<<p/m<<endl;
  p -=p/m*m;
  cout<<p;
}