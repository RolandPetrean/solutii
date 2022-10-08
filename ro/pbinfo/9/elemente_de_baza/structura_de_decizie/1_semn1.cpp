// https://www.pbinfo.ro/probleme/168/semn1
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b;
  cin>>a>>b;
  if ((a>0 && b>0) || (a<0 && b<0)) cout<<"da";
  else cout<<"nu";
}