// https://www.pbinfo.ro/probleme/10/suma-cifrelor
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long s=0;
  while (n) {
    s += n%10;
    n /= 10;
  }
  cout<<s;
}