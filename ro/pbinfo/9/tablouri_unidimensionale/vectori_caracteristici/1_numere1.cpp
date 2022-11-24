// https://www.pbinfo.ro/probleme/525/numere1
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool freq[1000];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  for (int i=0; i<n; ++i) {
    int x;
    cin>>x;
    if (x<1000) freq[x] = true;
  }

  int max1=0, max2=0;
  for (int i=999; i>99 && (!max1 || !max2); --i) {
    if (!freq[i] && !max1) max1=i;
    else if (!freq[i]) max2=i;
  }

  if (!max1 || !max2) cout<<"NU EXISTA";
  else cout<<max2<<" "<<max1;
}