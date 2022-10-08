// https://www.pbinfo.ro/probleme/50/expresie
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long fact(long long n) {
  if (n == 0) return 1;
  return n * fact(n-1);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  long long s=0;
  for (int i=1; i<=n; i++) {
    s += fact(i);
  }
  cout<<"Rezultatul este "<<s;
}