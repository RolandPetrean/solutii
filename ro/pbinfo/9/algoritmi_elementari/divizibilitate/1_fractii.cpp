// https://www.pbinfo.ro/probleme/391/fractii
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int p=0, q=1;
  while (n--) {
    int x, y;
    cin>>x>>y;
    
    int gcd=__gcd(p, q);
    p /= gcd;
    q /= gcd;

    int lcm=(y*q)/__gcd(y, q);
    x *= lcm/y;
    p *= lcm/q;
    y = lcm;
    q = lcm;

    p += x;
  }

  int gcd=__gcd(p, q);
  p /= gcd;
  q /= gcd;
  cout<<p<<" "<<q;
}