#pragma once
#include "iostream"
using namespace std;

class Booking
{
public:
    float day = 1;
    float month = 1;
    float nr_of_commands = 0;
    int increase_cmd = 0;
    int month_ride = 0;

    int increase_nr_commands(int value){
        if(value == 5){
            return 20;
        }else if(value == 4){
            return 15;
        }else if(value == 3){
            return 10;
        }
    }
};
