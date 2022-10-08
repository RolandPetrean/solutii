// https://www.pbinfo.ro/probleme/446/cifmax3
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  int maxi=0;
  while (n) {
    maxi = max(maxi, n%10);
    n /= 10;
  }
  cout<<maxi;
}