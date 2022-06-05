//Afzal Alfaraz
//G1A021098

#include<iostream>
using namespace std;
int hitungnol(int angka)
{
static int hitung=0;
    if(angka>0)
    {

        if(angka%10==0)
        hitung++;

        hitungnol(angka/10);
    }
    return hitung;
}
int main()
{
    int n;
    cout<<"Masukkan angka yang ingin dicari:";
    cin>>n;
    cout<<"Banyak angka nol dalam angka adalah : "<<hitungnol(n);
}
