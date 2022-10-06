// https://www.pbinfo.ro/probleme/176/picioare1
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll c, p;
  cin>>c>>p;
  ll o=(p-2*c)/2;
  cout<<c-o<<" "<<o;
}