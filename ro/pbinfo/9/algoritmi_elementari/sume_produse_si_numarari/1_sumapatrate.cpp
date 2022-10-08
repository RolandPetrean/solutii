// https://www.pbinfo.ro/probleme/47/sumapatrate
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  cout<<"Rezultatul este "<<n*(n+1)*(2*n+1)/6;
}