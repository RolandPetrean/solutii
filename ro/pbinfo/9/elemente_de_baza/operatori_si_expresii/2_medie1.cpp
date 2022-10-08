// https://www.pbinfo.ro/probleme/173/medie1
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long x, y, z;
  cin>>x>>y>>z;
  
  float m;
  m=(x+y+z)/3.; // super ciudat dar ok
  m=(int) m*100;
  m=(float) m/100.;
  cout<<fixed<<setprecision(2)<<m;
}