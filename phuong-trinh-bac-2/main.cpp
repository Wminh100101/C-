#include <iostream>
#include "tinhToan.h"
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    tinhToan tinhToan(a,b,c);
    
    if (tinhToan.delta() < 0){
        cout<<"NO";
        cout<<tinhToan.delta();
    }
    
    else if (tinhToan.delta() == 0 )
    {
        double x0 = (double) (-b/(2*a));
        cout<<x0;

    }
    else
    {
        double x1 = (double) (-b + sqrt(tinhToan.delta()))/(2*a);
        double x2 = (double) (-b - sqrt(tinhToan.delta()))/(2*a);
        cout<<x1,"\b";
        cout<<x2;
    }
    
    
    return 0;
}
