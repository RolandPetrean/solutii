// https://www.pbinfo.ro/probleme/4215/alipit
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  cin>>s;

  for (int i=1; i<s.size()-1; ++i) {
    if (s.size()%i==0) {
      string chk=s.substr(0,i);
      bool ok=true;
      for (int j=i; j<s.size() && ok; j+=i) {
        if (s.substr(j, i) != chk) ok = false;
      }

      if (ok) {
        cout<<"DA";
        return 0;
      }
    }
  }

  cout<<"NU";
}