// https://www.pbinfo.ro/probleme/3060/melc
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  double v, dt;
  long long d, t;
  cin>>v>>d;
  
  dt = 60*(d/1000.0)/v;
  t = dt;
  if (t != dt) ++t;
  cout<<t;
}