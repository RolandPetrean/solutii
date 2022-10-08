// https://www.pbinfo.ro/probleme/1311/cifegale
#include <bits/stdc++.h>
#define endl '\n'
#define mod 1000000007
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long c=n%10;
  while (n>0) {
    if (n%10 != c) {
      cout<<"nu";
      return 0;
    }
    n /= 10;
  }
  cout<<"da";
}