// https://www.pbinfo.ro/probleme/118/cifre2
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long c1, c2;
  while (n) {
    c2=c1;
    c1=n%10;
    n /= 10;
  }
  cout<<c1+c2;
}