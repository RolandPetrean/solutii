// https://www.pbinfo.ro/probleme/289/existaimpare
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  for (int i=0; i<n; i++) {
    long long x;
    cin>>x;
    if (x&1) {
      cout<<"DA";
      return 0;
    }
  }
  cout<<"NU";
}