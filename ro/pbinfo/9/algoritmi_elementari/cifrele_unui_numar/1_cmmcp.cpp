// https://www.pbinfo.ro/probleme/3665/cmmcp
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  if (n==0) {
    cout<<0;
    return 0;
  }

  int maxi=-1;
  while (n) {
    if ((n%10)%2==0) maxi = max(maxi, (int) (n%10));
    n /= 10;
  }
  if (maxi==-1) cout<<10;
  else cout<<maxi;
}