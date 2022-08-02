// https://www.pbinfo.ro/probleme/2764/invertedcolor
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll r, g, b;
  cin>>r>>g>>b;
  cout<<255-r<<" "<<255-g<<" "<<255-b;
}