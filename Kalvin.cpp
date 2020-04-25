#include <stdio.h>
#include <iostream>

using namespace std;

class Kalvin : public Temperatura {
    public:
        void show(){
            cout << "k_c = " << k_c() << endl;
            cout << "k_f = " << k_f() << endl;
        }
        // C = K - 273.15
        float k_c(){
            return this->temp - 273.15;
        }

        // F = 9/5 (K - 273.15) + 32
        float k_f(){
            return 9 * (this->temp - 273.15) / 5 + 32;
        }
};