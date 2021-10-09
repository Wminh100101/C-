#include <iostream>
#include "cvi.h"


void cvi ::tinhToan(){
    chuVi = r*2*(3.14159);

}cvi ::cvi(double r){
    this->r = r;
    tinhToan();
}