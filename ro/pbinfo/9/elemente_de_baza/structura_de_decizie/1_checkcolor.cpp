// https://www.pbinfo.ro/probleme/2765/checkcolor
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int r, g, b;
  cin>>r>>g>>b;

  if (r<0 || g<0 || b<0 || r>255 || g>255 || b>255) cout<<"NU E CULOARE";
  else if (abs(r-g)<=10 && abs(r-b) <= 10 && abs(g-b) <= 10) cout<<"GRI";
  else cout<<"CULOARE";
}