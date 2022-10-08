// https://www.pbinfo.ro/probleme/3625/prelucrari-cifre
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int sp=0, si=0, sd3=0, cnt5=0, prod=1, u=n%10, l;
  while (n) {
    l = n%10;
    sp += l*l;
    if (l&1) si += l;
    if (l%3==0) sd3 += l;
    if (l>5) ++cnt5;
    if (l != 0) prod *= l;
    n /= 10;
  }
  cout<<sp<<" "<<si<<" "<<sd3<<" "<<cnt5<<" "<<prod<<" "<<u+l;
}