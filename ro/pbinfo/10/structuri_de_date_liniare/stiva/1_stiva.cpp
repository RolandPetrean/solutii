// https://www.pbinfo.ro/probleme/875/stiva
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'#define mod 1000000007

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  long long n;
  cin>>n;

  stack<long long> s;
  for (int i=0; i<n; ++i) {
    string op;
    cin>>op;
    
    if (op == "push") {
      long long x;
      cin>>x;
      s.push(x);
    } else if (op == "pop") s.pop();
    else if (op == "top") cout<<s.top()<<endl;
  }
}