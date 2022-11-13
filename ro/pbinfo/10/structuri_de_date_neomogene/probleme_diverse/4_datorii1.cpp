// https://www.pbinfo.ro/probleme/3437/datorii1
// 0p, cred ca citesc gresit sau ceva? altfel ar trebui sa mearga.
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

ifstream fin("datorii1.in");
ofstream fout("datorii1.out");

struct Firma {
  string nume;
  int sd, sp;
};

bool cmp(Firma a, Firma b) {
  return a.nume < b.nume;
}

char aux;

int main() {
  int c, d;
  fin>>c>>d;

  string input;
  vector<Firma> firme{};
  while (getline(fin, input)) {
    if (input.size()<5) continue;

    int arrowPos=input.find_first_of('>'), lastSpacePos=input.find_last_of(' ');
    string x=input.substr(0,arrowPos-1), y=input.substr(arrowPos+2, lastSpacePos-arrowPos-2);
    int cost=stoi(input.substr(lastSpacePos+1));

    firme.push_back({x,cost,0});
    firme.push_back({y,0,cost});
  }

  sort(firme.begin(), firme.end(), cmp);
  vector<Firma> firmeprf;
  firmeprf.push_back(firme[0]);
  int l=0;
  for (int r=1; r<(int)firme.size(); ++r) {
    if (firme[r].nume != firmeprf[l].nume) {
      firmeprf.push_back({firme[r].nume,0,0});
      ++l;
    }
    firmeprf[l].sd += firme[r].sd;
    firmeprf[l].sp += firme[r].sp;
  }
  
  if (c==1) fout<<firmeprf.size();
  else {
    for (Firma f:firmeprf) fout<<f.nume<<" "<<f.sd<<" "<<f.sp<<endl;
  }
}