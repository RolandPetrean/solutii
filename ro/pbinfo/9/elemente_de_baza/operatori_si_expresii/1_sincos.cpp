// https://www.pbinfo.ro/probleme/3458/sin-cos
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  double x;
  cin>>x;

  double r=x*3.1415/180;
  cout<<fixed<<setprecision(5)<<sin(r)<<" "<<cos(r);
}