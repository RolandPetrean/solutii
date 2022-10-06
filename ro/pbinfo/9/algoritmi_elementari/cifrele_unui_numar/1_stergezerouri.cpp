// https://www.pbinfo.ro/probleme/3932/stergezerouri
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  while (n%10==0 && n) n /= 10;
  cout<<n;
}