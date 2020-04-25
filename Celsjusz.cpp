#include <stdio.h>
#include <iostream>


using namespace std;

class Celsjusz : public Temperatura {
    public:
        void show(){
            cout << "c_k = " << c_k() << endl;
            cout << "c_f = " << c_f() << endl;
        }

        // K = C + 273.15.
        float c_k(){
            return this->temp  + 273.15;
        }

        // F = (C * 1.8) + 32
        float c_f(){
           return  this->temp * 1.8 + 32;
        }
};