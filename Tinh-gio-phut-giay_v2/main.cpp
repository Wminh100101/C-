#include <iostream>
#include <math.h>
#include "loading.h"

using namespace std;

int main(int argc, char const *argv[])
{
    loading();
    cout << "Xin moi nhap so giay: ";
    int s;
    cin >> s;
    cout<<"\n";
    int h;
    int m;
    h = s / 3600;
    s %= 3600;
    if (s != 0)
    {
        m = s/60;
        s %= 60;
    }
    cout<<h<<":"<<m<<":"<<s;

    return 0;
}
