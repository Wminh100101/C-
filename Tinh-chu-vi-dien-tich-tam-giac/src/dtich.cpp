#include <iostream>
#include "dtich.h"
#include <math.h>
#include "cvi.h"
void dtich ::tinhToan(){
    cvi cvi(c1,c2,c3);
    int p = cvi.chuVi/2;
    dienTich = sqrt(p*(p-c1)*(p-c2)*(p-c3));
}
dtich ::dtich(double c1,double c2, double c3){
   this->c1 = c1;
    this->c2 = c2;
    this->c3 = c3;
    tinhToan();
}