// https://www.pbinfo.ro/probleme/3275/nrsumcifmax
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long a, b, c;
  cin>>a>>b>>c;

  long long x=a%10+a/10%10, y=b%10+b/10%10, z=c%10+c/10%10;
  if (x >= z && y >= z) cout<<a<<" "<<b;
  else if (y >= x && z >= x) cout<<b<<" "<<c;
  else if (x >= y && z >= y) cout<<a<<" "<<c;
}