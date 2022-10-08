// https://www.pbinfo.ro/probleme/177/bisect
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  if ((n%4==0 && n%100!=0) || n%400==0) cout<<"bisect";
  else cout<<"nebisect";
}