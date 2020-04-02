#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

class persegi_panjang {

private:
    int panjang,lebar;
public:
int luas(){
int luas = panjang*lebar;
return luas;
}
int keliling(){
int keliling = (2*panjang)+(2*lebar);
return keliling;
}

void beri_nilai (int pas_panjang, int pas_lebar){
    panjang=pas_panjang; lebar=pas_lebar;
}
};
main() {
    persegi_panjang b;
int nilai1,nilai2;


cout<<"\t\tMenghitung Luas dan Keliling Persegi\n";
cout<<"Panjang = ";
cin>>nilai1;
cout<<"Lebar = ";
cin>>nilai2;
b.beri_nilai(nilai1,nilai2);

cout<<"\nLuas = "<<b.luas();

cout<<"\n\nKeliling = "<<b.keliling();
}

