// https://www.pbinfo.ro/probleme/4034/canada
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b;
  cin>>a>>b;
  if (a+b>100) cout<<a+b-100;
  else cout<<0;
}