// https://www.pbinfo.ro/probleme/2547/divizori3
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

bool prim(int n) {
  if (n==2 || n==3) return true;
  if (n<2 || n%2==0 || n%3==0) return false;
  for (int i=5; i*i<=n; i+=6) {
    if (n%i==0 || n%(i+2)==0) return false;
  }
  return true;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a, b;
  cin>>a>>b;

  int st=sqrt(a);
  if (st*st != a) ++st;

  int div3=0;
  for (int i=st; i*i<=b; ++i) {
    if (prim(i)) ++div3;
  }
  cout<<div3;
}