// https://www.pbinfo.ro/probleme/2263/camioane
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long t1, t2, n, m, z;
  cin>>t1>>t2>>n>>m>>z;
  cout<<t1*n*z+t2*m*z;
}