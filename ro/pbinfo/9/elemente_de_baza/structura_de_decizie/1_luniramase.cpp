// https://www.pbinfo.ro/probleme/2606/luniramase
#include <bits/stdc++.h>
using namespace std;#define endl '\n'

string luni[12]{"Ianuarie", "Februarie", "Martie", "Aprilie", "Mai", "Iunie", "Iulie", "August", "Septembrie", "Octombrie", "Noiembrie", "Decembrie"};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  for (int i=n; i<12; ++i) {
    cout<<luni[i]<<endl;
  }
}