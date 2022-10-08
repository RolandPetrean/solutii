// https://www.pbinfo.ro/probleme/3611/sumacifperm
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  string n;
  cin>>n;

  sort(n.begin(), n.end());
  
  int s=0;
  do {
    s += stoi(n);
  } while (next_permutation(n.begin(), n.end()));
  cout<<s;
}