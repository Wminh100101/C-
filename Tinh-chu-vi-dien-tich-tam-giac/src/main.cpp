#include <iostream>
#include "cvi.h"
#include "dtich.h"
using namespace std;
int main(int argc, char const *argv[])
{
    double c1,c2,c3;
    cin>>c1;
    cin>>c2;
    cin>>c3;
    cvi cvi(c1,c2,c3);
    dtich dtich(c1,c2,c3);
    cout<< cvi.chuVi;
    cout<<"\t";
    cout<< dtich.dienTich;
    return 0;
}
