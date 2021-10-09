#include <iostream>
#include "cvi.h"
#include "dtich.h"
#include "loading.h"
#include <windows.h>
using namespace std;
int main(int argc, char const *argv[])
{
    
//     system("color 0A");
//
//    char a = 177, b = 219;
//
//    std::cout << "\n\t\t\t\t\t\tLoading...\n\n";
//    std::cout << "\t\t\t\t\t";
//
//    for (int i = 0; i < 26; i++)
//        std::cout << a;
//
//    std::cout << "\r";
//    std::cout << "\t\t\t\t\t";
//
//    for (int i = 0; i < 26; i++)
//    {
//        std::cout << b;
//        Sleep(100);
//    }
//    std::cout << "\nDa load xong!!!";
//    Sleep(500);
//
//    system("cls");
//    std::cout << std::endl;
//    system("color F");
	loading();
    double c1,c2,c3;
    cin>>c1;
    cin>>c2;
    cin>>c3;
    cvi cvi(c1,c2,c3);
    dtich dtich(c1,c2,c3);
    cout<< cvi.chuVi;
    cout<<"\t";
    cout<< dtich.dienTich;
    return 0;
}
