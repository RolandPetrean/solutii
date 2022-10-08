// https://www.pbinfo.ro/probleme/378/pavare
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int a, b;
  cin>>a>>b;
  cout<<a*b/(__gcd(a,b)*__gcd(a,b))<<" "<<__gcd(a,b);
}