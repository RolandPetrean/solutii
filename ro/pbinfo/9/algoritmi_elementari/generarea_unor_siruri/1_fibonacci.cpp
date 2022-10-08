// https://www.pbinfo.ro/probleme/255/fibonacci
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;
  vector<long long> fib{1, 1};
  for (int i=0; i<min(2LL, n); i++) cout<<fib[i]<<" ";
  for (int i=2; i<n; i++) {
    fib.push_back(fib[i-1] + fib[i-2]);
    cout<<fib[i]<<" ";
  }
}