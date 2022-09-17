// https://www.pbinfo.ro/probleme/2748/patrula3
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

long long lcm(long long a, long long b) {
  return a*b/__gcd(a, b);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  long long s1=n*4-4, s2=(n-2)*4-4, s3=(n-4)*4-4, d=lcm(s1, lcm(s2, s3));
  cout<<d/s1<<" "<<d/s2<<" "<<d/s3;
}