#include <iostream>
#include "cvi.h"
#include "dtich.h"
#include "loading.h"
using namespace std;
int main(int argc, char const *argv[])
{
	loading();
    double r;
    cin>>r;
    cvi cvi(r);
    dtich dtich(r);
    cout<< cvi.chuVi;
    cout<<"  ";
    cout<< dtich.dienTich;
    return 0;
}
