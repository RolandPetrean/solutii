// https://www.pbinfo.ro/probleme/793/sumprod
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a, b, c;
  cin>>a>>b>>c;
  
  if (a>b && a>c) {
    if (b>c) cout<<a*b+c;
    else cout<<a*c+b;
  } else if (b>a && b>c) {
    if (a>c) cout<<b*a+c;
    else cout<<b*c+a;
  } else {
    if (b>a) cout<<c*b+a;
    else cout<<c*a+b;
  }
}