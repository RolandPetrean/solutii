// https://www.pbinfo.ro/probleme/1303/calculator
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll a, b;
  char c;
  cin>>a>>b>>c;

  if (c == '+') cout<<a+b;
  else if (c == '-') cout<<max(a,b)-min(a,b);
  else if (c == '*') cout<<a*b;
  else if (c == '/') cout<<max(a,b)/min(a,b);
}