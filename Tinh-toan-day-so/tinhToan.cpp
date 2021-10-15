#include <iostream>
#include "loading.h"
#include <math.h>

using namespace std;

class tinhToan
{
private:
    /* data */
public:
    int giaiThua(int a);
    int luyThua(int b, int x);
};
int tinhToan::luyThua(int b,int x){
    return (pow(b,x));
}
int tinhToan ::giaiThua(int a){
   
   if(a == 1){
       return 1;
   }
   else{
       return a*giaiThua(a-1);
   }
    
}



int main(int argc, char const *argv[])
{
    loading();
    tinhToan caculate;
    int n;
    int x;
    cout<<"Xin moi nhap n va x:";
    cin>>n>>x;
    // cout << caculate.giaiThua(n);
    // cout << caculate.luyThua(x,n);
    double ketQua;
    for (int i = 1; i <= n; i++)
    {
        ketQua = ketQua + (double) caculate.luyThua(x,i)/caculate.giaiThua(i);
    }
    cout<<"Ket qua: "<<ketQua;
    return 0;
}
