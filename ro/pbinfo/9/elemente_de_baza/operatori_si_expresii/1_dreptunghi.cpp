// https://www.pbinfo.ro/probleme/3070/dreptunghi
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a, b;
  cin>>a>>b;

  cout<<2*(a+b)<<" "<<a*b<<" "<<a*a+b*b;
}