// https://www.pbinfo.ro/probleme/450/minicalc
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a, b, c;
  cin>>a>>b>>c;

  if (c==1) cout<<a+b;
  else if (c==2) cout<<a-b;
  else if (c==3) cout<<a*b;
  else if (c==4) cout<<a/b;
  else cout<<a%b;
}