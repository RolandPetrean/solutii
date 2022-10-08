// https://www.pbinfo.ro/probleme/68/ciframaxima
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long maxi=0;
  while (n > 0) {
    maxi = max(maxi, n%10);
    n /= 10;
  }
  cout<<maxi;
}