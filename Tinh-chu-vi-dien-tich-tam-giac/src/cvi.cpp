#include <iostream>
#include "cvi.h"

void cvi ::tinhToan(){
    chuVi = (c1+c2+c3);
}
cvi ::cvi(double c1,double c2, double c3){
    this->c1 = c1;
    this->c2 = c2;
    this->c3 = c3;
    tinhToan();
}