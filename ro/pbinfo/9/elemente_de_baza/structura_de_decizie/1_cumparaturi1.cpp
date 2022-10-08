// https://www.pbinfo.ro/probleme/3211/cumparaturi1
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long s, c, n;
  cin>>s>>c>>n;
  if (s%c==0 && s%n==0) cout<<"CN";
  else if (s%c==0) cout<<"C";
  else if (s%n==0) cout<<"N";
  else cout<<"nimic";
}