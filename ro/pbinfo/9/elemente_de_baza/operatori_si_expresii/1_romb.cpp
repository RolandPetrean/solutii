// https://www.pbinfo.ro/probleme/1334/romb
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  double d1, d2;
  cin>>d1>>d2;
  
  double hd1=d1/2, hd2=d2/2;

  cout<<4*sqrt(hd1*hd1+hd2*hd2)<<" "<<(d1*d2)/2;
}