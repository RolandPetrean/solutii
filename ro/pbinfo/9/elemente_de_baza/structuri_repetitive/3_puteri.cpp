// https://www.pbinfo.ro/probleme/254/puteri
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  while (n--) {
    int a, b;
    cin>>a>>b;
    if (a>b) swap(a, b);
    
    int p2=pow(2, (int) log2(b));
    if (p2>=a) cout<<p2<<endl;
    else cout<<"0\n";
  }
}