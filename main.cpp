#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    const double d2r = M_PI / 180;
    const double g = 9.81;

    double stopnie;

    cout << "Podaj kat rzutu:  " << endl;
    cin >> stopnie;

    double v0 = 25;
    double alpha = stopnie * d2r;




    //========== Obliczanie czasu lotu ========//
    double tc = 2 * v0 * sin(alpha) / g;

    cout << "Czas lotu wynosi:  " << tc << endl;


    //=========== Obliczanie wysokosci maksymalnej lotu =========//
    double Hmax = pow(v0 * sin(alpha), 2) / 2 * g;

    cout << "Wysokosc maksymalna lotu wynosi:  " << Hmax << endl;



    return (0);
}