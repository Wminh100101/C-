#include <iostream>
#include "loading.h"

using namespace std;
class diemTrungBinh
{

public:
    double tinhToan(double a, double b, double c){
        return (a+b+c)/3;
    }
};




int main(int argc, char const *argv[])
{
    loading();
    cout<<"Xin moi nhap lan luot diem toan, ly, hoa: ";
    double toan,ly,hoa;
    cin>>toan>>ly>>hoa;
    diemTrungBinh ave;
    printf("%0.2f",ave.tinhToan(toan,ly,hoa));
    return 0;
}
