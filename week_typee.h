#pragma once
#include "iostream"
#include "schedulee.h"
#include "week_typee.h"

using namespace std;

class Week_Type{
public:
    float wake_up;
    float hours_gettting_dressed;
    float hours_brushing_teeth;
    float hours_to_eat;
    float hours_to_drink;
    float done_morning;
    float price;
    float distance;
    float time;
    string weekdays[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    void get_the_day_of_the_week(int val){
        cout <<"Today is " <<weekdays[7] << endl;
    }


    float week_type_day() {
    //float wake_up = 8;
    //float hours_gettting_dressed = 0.05;
    //float hours_brushing_teeth = 0.03;
    //float hours_to_eat = 0.15;
    //float hours_to_drink = 0.07;
    //float start_ride = 70;
    //float cost_per_km = 10.5;
    //float cost_per_min = 1;
    //price = start_ride + (cost_per_km * distance) + (cost_per_min * time);
    // return price;
        cout << "Its the part of the week where we supposed to go to work " << endl;
    }

    float week_type_end() {
        //float wake_up = 11;
        //float hours_gettting_dressed = 0.12;
        //float hours_brushing_teeth = 0.05;
        //float hours_to_eat = 0.23;
        //float hours_to_drink = 0.10;
        //float start_ride = 29;
        //float cost_per_km = 5.5;
        //float cost_per_min = 0.38;
        // price = start_ride + (cost_per_km * distance) + (cost_per_min * time);
        // return price;
        cout << "It's the part of the week were we are supposed to take a break " << endl;
    };

};

