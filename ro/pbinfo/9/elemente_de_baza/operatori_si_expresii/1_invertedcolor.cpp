// https://www.pbinfo.ro/probleme/2764/invertedcolor
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long r, g, b;
  cin>>r>>g>>b;
  cout<<255-r<<" "<<255-g<<" "<<255-b;
}