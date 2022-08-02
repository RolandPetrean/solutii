// https://www.pbinfo.ro/probleme/106/minim3
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll a, b, c;
  cin>>a>>b>>c;
  cout<<min(a, min(b, c));
}