#include "iostream"
#include "string"
#include "schedulee.h"
#include <string>
#include <cstdlib>
//using namespace std;

class Car
{
public:
    string model[5] = {"Toyota", "Nissan", "Hyundai", "Mazda", "Tesla"};
    float fuel_premium;
    float fuel_standart;
    void start_engine(int val){
        cout << "Start the engine of " << model[val] << endl;
    }

    void stop_engine(){
        cout << "Stop the engine" << endl;
    }
};
