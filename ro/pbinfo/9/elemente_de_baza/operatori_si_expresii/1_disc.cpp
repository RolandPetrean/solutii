// https://www.pbinfo.ro/probleme/2889/disc
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  double r;
  cin>>r;
  cout<<fixed<<setprecision(10)<<M_PI*r*r<<" "<<2*M_PI*r;
}