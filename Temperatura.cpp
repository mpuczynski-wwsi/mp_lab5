#include <stdio.h>
#include <iostream>


using namespace std;

class Temperatura {
    protected:
        float temp;
    
    public:
        float getTemp(){
            return this->temp;
        }

        void setTemp(float t){
            this->temp = t;
        }
};