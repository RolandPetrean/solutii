// https://www.pbinfo.ro/probleme/13/prefixe
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  cin>>s;
  for (ll i=s.size(); i>0; --i) cout<<s.substr(0,i)<<endl;
  for (ll i=0; i<s.size(); ++i) cout<<s.substr(i,s.size())<<endl;
}