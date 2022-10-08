// https://www.pbinfo.ro/probleme/2288/cifraimparamaxima
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int cifimp=-1;
  while (n) {
    if ((n%10)&1) cifimp = max(cifimp, n%10);
    n /= 10;
  }
  if (cifimp==-1) cout<<"nu exista";
  else cout<<cifimp;
}