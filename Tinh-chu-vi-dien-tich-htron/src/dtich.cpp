#include <iostream>
#include "dtich.h"
#include <math.h>
void dtich ::tinhToan(){
    dienTich = pow(r,2)*3.14159;
}
dtich ::dtich(double r){
    this->r = r;
    tinhToan();
}