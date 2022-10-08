// https://www.pbinfo.ro/probleme/1301/isoscel
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  double a, b, c;
  cin>>a>>b>>c;

  if (a<=0 || b<=0 || c<=0 || a > b+c || b > a+c || c > a+b) cout<<"Nu formeaza triunghi";
  else if (a == b && b == c) cout<<"Nu formeaza triunghi isoscel"; // penal
  else if (a == b || b == c || a == c) cout<<"Formeaza triunghi isoscel";
  else cout<<"Nu formeaza triunghi isoscel";
}