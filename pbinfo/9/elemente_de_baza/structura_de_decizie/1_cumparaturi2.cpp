// https://www.pbinfo.ro/probleme/3212/cumparaturi2
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll s, d, r, m;
  cin>>s>>d>>r>>m;
  if (s >= d) cout<<"drona";
  else if (s >= r) cout<<"robot";
  else if (s >= m) cout<<"masina";
  else cout<<"nimic";
}