/******************
Tuan 7: Con tro
Bai 5: Su dung con tro void in du lieu
******************/

#include <iostream>
using namespace std;

int main() {
    cout << "----------Bai 5----------" << endl;
    cout << "Chuong trinh su dung con tro void in du lieu!\n" << endl;

    int ia = 10;
    float fb = 20;
    double dc = 40.2;
    void *p;        //Khai bao con tro void p

    p = &ia;        //p gan dia chi cua ia
    int *pi = static_cast<int *> (p);       //Ep kieu void ve int thanh bien moi pi
    cout << "Gia tri ia = " << *pi << endl;

    p = &fb;        //p gan dia chi cua fb
    float *pf = static_cast<float *> (p);   //Ep kieu void ve float thanh bien moi pf
    cout << "Gia tri fb = " << *pf << endl;

    p = &dc;        //p gan dia chi cua dc
    double *pd = static_cast<double *> (p); //Ep kieu void ve double thanh bien moi dc
    cout << "Gia tri fb = " << *pd << endl;

    return 0;
}

