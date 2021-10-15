#include <iostream>
#include "loading.h"

using namespace std;

int main(int argc, char const *argv[])
{
    loading();
    cout<<"Xin moi nhap so Kwh dien: ";
    double kwh;
    cin>>kwh;
    const int moc1 = 101;
    const int moc2 = 151;
    const int moc3 = 201;
    const int tien1 = 100*600;
    const int tien2 = 50*700;
    const int tien3 = 50*900;
    cout<<"Tien dien can tra:";
    if(kwh < moc1){
        cout<<kwh*600;
    }
    else if(moc1 <= kwh && kwh < moc2){
        cout<<tien1 + (kwh - 100)*700;
    }
    else if(moc2 <= kwh && kwh < moc3){
        cout<<tien2 + tien1 + (kwh - 150)*900;
    }
    else if (moc3 <= kwh)
    {
        cout<<tien1 + tien2 + tien3 +(kwh - 200)*1100;
    }
    cout<<"vnd";
    
    return 0;
}
