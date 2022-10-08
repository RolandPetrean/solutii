// https://www.pbinfo.ro/probleme/3212/cumparaturi2
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long s, d, r, m;
  cin>>s>>d>>r>>m;
  if (s >= d) cout<<"drona";
  else if (s >= r) cout<<"robot";
  else if (s >= m) cout<<"masina";
  else cout<<"nimic";
}