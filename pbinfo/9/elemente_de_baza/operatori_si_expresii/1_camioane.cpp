// https://www.pbinfo.ro/probleme/2263/camioane
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll t1, t2, n, m, z;
  cin>>t1>>t2>>n>>m>>z;
  cout<<t1*n*z+t2*m*z;
}