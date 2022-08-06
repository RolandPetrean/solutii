// https://www.pbinfo.ro/probleme/179/triunghi
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  double a, b, c;
  cin>>a>>b>>c;
  if (a<b+c && b<a+c && c<a+b && a>0 && b>0 && c>0) cout<<"da";
  else cout<<"nu";
}