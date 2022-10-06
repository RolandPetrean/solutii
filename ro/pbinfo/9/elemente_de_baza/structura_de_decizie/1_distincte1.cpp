// https://www.pbinfo.ro/probleme/453/distincte1
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a, b, c;
  cin>>a>>b>>c;

  if (a==b && b==c) cout<<1;
  else if (a==c || a==b || b==c) cout<<2;
  else cout<<3;
}