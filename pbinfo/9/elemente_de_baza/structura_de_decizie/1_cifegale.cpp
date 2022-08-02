// https://www.pbinfo.ro/probleme/1311/cifegale
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;

  ll c=n%10;
  while (n>0) {
    if (n%10 != c) {
      cout<<"nu";
      return 0;
    }
    n /= 10;
  }
  cout<<"da";
}