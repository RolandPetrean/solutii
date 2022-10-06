// https://www.pbinfo.ro/probleme/1665/pozitiesir
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n, x;
  cin>>n>>x;

  bool gasit=false;
  int poz=1;
  while (n--) {
    int a;
    cin>>a;
    if (a>x) ++poz;
    else if (a==x) gasit = true;
  }
  if (gasit) cout<<poz;
  else cout<<-1;
}