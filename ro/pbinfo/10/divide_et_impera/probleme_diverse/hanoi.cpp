// https://www.pbinfo.ro/probleme/2527/hanoi
#include <bits/stdc++.h>
using namespace std;
 
ifstream fin("hanoi.in");
ofstream fout("hanoi.out");

void hanoi(int n, char start, char end, char aux) {
  if (n == 1) {
    fout<<start<<"->"<<end<<endl;
    return;
  }
  hanoi(n-1, start, aux, end);
  hanoi(1, start, end, aux);
  hanoi(n-1, aux, end, start);
}
 
int main() {
  int n;
  fin>>n;
  fout<<(1<<n)-1<<endl;
  hanoi(n, 'A', 'C', 'B');
}