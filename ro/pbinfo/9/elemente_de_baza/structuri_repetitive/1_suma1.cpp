// https://www.pbinfo.ro/probleme/459/suma1
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int s=0, x, lx=-1;
  while ((cin>>x) && x != lx) {
    s += x;
    lx = x;
  }
  cout<<s+x;
}