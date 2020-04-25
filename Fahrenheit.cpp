#include <stdio.h>
#include <iostream>


using namespace std;

class Fahrenheit : public Temperatura {
    public:
        void show(){
            cout << "f_c = " << f_c() << endl;
            cout << "f_k = " << f_k() << endl;
        }
        // C = 5/9 (° F - 32)
        float f_c(){
            return 5 * (this->temp - 32) / 9;
        }

        // K = 5/9 (° F - 32) + 273.15
        float f_k(){
            return 5 * (this->temp - 32) / 9 + 273.15;
        }
};