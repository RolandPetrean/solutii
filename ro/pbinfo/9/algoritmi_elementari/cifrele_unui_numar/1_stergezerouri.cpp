// https://www.pbinfo.ro/probleme/3932/stergezerouri
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  while (n%10==0 && n) n /= 10;
  cout<<n;
}