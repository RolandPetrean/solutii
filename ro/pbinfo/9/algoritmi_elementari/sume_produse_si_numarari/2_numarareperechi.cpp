// https://www.pbinfo.ro/probleme/56/numarareperechi
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long x, lx, c=0;
  cin>>lx;
  while (lx != 0 && cin>>x && x != 0) {
    if (abs(x%10) == abs(lx%10)) ++c;
    lx = x;
  }
  cout<<c;
}