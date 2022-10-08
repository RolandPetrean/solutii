// https://www.pbinfo.ro/probleme/2695/cub-perfect
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;
    long long cb = cbrt(x);
    if (cb*cb*cb == x) cout<<"DA"<<endl;
    else cout<<"NU"<<endl;
  }
}