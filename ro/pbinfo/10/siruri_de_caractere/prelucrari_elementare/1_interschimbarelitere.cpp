// https://www.pbinfo.ro/probleme/84/interschimbarelitere
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  cin>>s;
  
  long long cpos=-1, vpos=-1;
  string vs{"aeiou"};
  for (int i=0; i<s.size(); ++i) {
    if (vs.find(s[i]) == string::npos) cpos=i;
    else if (vpos == -1) vpos=i;
  }
  if (cpos == -1 || vpos == -1) cout<<"IMPOSIBIL";
  else {
    char aux = s[cpos];
    s[cpos] = s[vpos];
    s[vpos] = aux;
    cout<<s;
  }
}