// https://www.pbinfo.ro/probleme/3810/sfera
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
#define PI 3.1415

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int r;
  cin>>r;

  cout<<fixed<<setprecision(2)<<4*r*r*PI<<" "<<(4*PI*r*r*r)/3;
}