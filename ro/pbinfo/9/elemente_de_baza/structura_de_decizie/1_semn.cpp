// https://www.pbinfo.ro/probleme/167/semn
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  if (n == 0) cout<<"nul";
  else if (n > 0) cout<<"pozitiv";
  else cout<<"negativ";
}