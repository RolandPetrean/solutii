// https://www.pbinfo.ro/probleme/256/fiboverif
#include <bits/stdc++.h>
using namespace std;#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  for (int i=0; i<n; ++i) {
    long long x;
    cin>>x;

    long long f1=1, f2=1, aux;
    while (f2 <= x) {
      aux = f2;
      f2 += f1;
      f1 = aux;
    }
    if (x == f1) cout<<"DA"<<endl;
    else cout<<"NU"<<endl;
  }
}