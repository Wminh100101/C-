#include <iostream>
#include <math.h>
#include "loading.h"

using namespace std;

int main(int argc, char const *argv[])
{
    const double pi =3.14;
    loading();
    double a;
    cout<<"Xin moi nhap so can tinh: ";
    cin>>a;
    double t = (a*pi)/180;
    cout<<"\nsin:"<<sin(t);
    cout<<"\n";
    cout<<"cos:"<<cos(t)<<" ";
    cout<<"\n";
    cout<<"tan:"<<tan(t)<<" ";
    cout<<"\n";
    cout<<"cotan:"<<1/tan(t)<<" ";
    return 0;
}
