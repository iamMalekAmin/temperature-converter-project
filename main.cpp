#include <iostream>

using namespace std;

int main()
{
    float a , b ,t ,m,l,h,x,y ,z,s ;
    int i =1;
    cout << "ChOose one of optins \n";
    cout << "1- temprature in celsius \n";
   cout << "2-length in meter \n";
    cout <<"3 -mass in kg .\n";
    cin >> i ;
    switch (i)
     {
     case 1 :
        cout << " plz enter value of temprature \n" ;
        cin >> t ;
        a = (t *9/5 )+32 ;
        cout << " temprature in fehrheit is eqyal  "<< a << "\n" ;
        b = t + 273.15 ;
        cout << " temrature in kelvin is equal "<< b << "\n ";
        break ;
     case 2 :
        cout << " plz enter the value if length by meter  \n";
        cin >> m;
        cout << m*100 << "cm" << "\n" << m*0.001 << "km"<< "\n"<< m*3.281 << "foot"<<"\n" <<m*1.094<< "yard \n";
        break ;
     case 3 :
        cout << " plz enter the value of mass by kg \n";
        cin >> l;
        cout <<  l *1000 << "gram"<< "\n"<< l*0.001 << "ton"<< "\n"<< l*2.205 << "pound" ;
        break ;
     default :
        cout << "this is error \n";
        }
    return 0;
}
