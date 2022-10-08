// https://www.pbinfo.ro/probleme/2419/intalnire
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a, b;
  cin>>a>>b;
  
  int oba=1, obb=1, mini=0;
  bool prieten=true;
  while (abs(a-b)>0) {
    if (prieten) {
      if (a<b) ++a;
      else --a;
      mini += oba;
      ++oba;
    } else {
      if (a<b) --b;
      else ++b;
      mini += obb;
      ++obb;
    }
    prieten = !prieten;
  }
  cout<<mini;
}