// https://www.pbinfo.ro/probleme/49/factorial
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

long long fact(long long n) {
  if (n == 0) return 1;
  return n*fact(n-1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  cout<<fact(n);
}