// https://www.pbinfo.ro/probleme/2611/raza
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b;
  cin>>a>>b;

  long long m=a*b/__gcd(a, b);
  cout<<m/a+m/b-2;
}