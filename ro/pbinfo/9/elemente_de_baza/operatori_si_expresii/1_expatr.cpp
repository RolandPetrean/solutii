// https://www.pbinfo.ro/probleme/2600/expatr
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  double a;
  cin>>a;
  double a2=pow(a, 2), a4=pow(a, 4), sqa=sqrt(a2+a4);
  cout<<(ll) (3*(a2 + a4)/(a2+a4+sqa) + sqa);
}