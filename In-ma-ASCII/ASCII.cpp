#include <iostream>
#include "loading.h"

using namespace std;

int main(int argc, char const *argv[])
{
    loading();
    cout<<"Xin moi nhap ky tu:";
    char kyTu;
    cin>>kyTu;
    int so = (int) kyTu;
    cout<<"\nMa ASCII: "<<so;
    kyTu = (char)++so;
    cout<<"\nKy tu ke tep:"<<kyTu;
    return 0;
}
