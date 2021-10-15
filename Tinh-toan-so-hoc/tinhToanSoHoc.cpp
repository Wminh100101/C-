#include <iostream>
#include "loading.h"

using namespace std;

int main(int argc, char const *argv[])
{
    loading();
    cout<<"Xin moi nhap 2 so a va b:";
    double a,b;
    cin>>a>>b;
    cout<<"Xin moi nhap phep toan:";
    char toanTu;
    cin>>toanTu;
    cout<<a<<" "<<toanTu<<" "<<b<<" = ";
    switch (toanTu)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '*':
        cout<<a*b;
        break;
    case '/':
        printf("%0.2f",a/b);
        break;
    default:
        break;
    }
    return 0;
}
