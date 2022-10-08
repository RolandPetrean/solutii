// https://www.pbinfo.ro/probleme/307/zerouri1
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  unsigned long long s=1;
  while (n--) {
    int x;
    cin>>x;

    s *= x;
    while (s%10==0 && s) s /= 10;
    s %= 1000000000;
  }
  while (s%10==0 && s) s /= 10;
  cout<<s%10;
}