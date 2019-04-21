#include <iostream>
using namespace std;
struct saya{double uts,uas,tugas,absen;
            float total;
            int nilai;};

struct saya titik;

double nilai(string txt){
cout<<"Masukan nilai anda "<<txt<<" : ";cin>>titik.nilai;
return titik.nilai;
}
double hasil(float uts,float uas,float tugas,float absen){
double total;
titik.total=titik.uts*0.2+titik.uas*0.3+titik.tugas*0.35+titik.absen*0.15;
cout<<"total nilai : "<<titik.total;
return titik.total;
}
void ukuran(){
    cout<<endl;
if (titik.total>=81)
    cout<<"Nilai : A";
else if (titik.total>=61)
    cout<<"Nilai : B";
else if (titik.total>=41)
    cout<<"Nilai : C";
else if (titik.total>=21)
    cout<<"Nilai : D";
else
    cout<<"Nilai : E";};

main(){
double uts,uas,tugas,absen,total;

titik.uts=nilai("uts");
titik.uas=nilai("uas");
titik.tugas=nilai("tugas");
titik.absen=nilai("absen");
hasil(uts,uas,tugas,absen);
ukuran();
}
