#pragma once
#include "personn.h"
#include "iostream"
using namespace std;

class Schooler:public Person
{
public:
    string schoolers[30] = {"Tom", "Iulius","Octavius","Andromeda","Alitta","Tristan","Leon","Esteban", "Andrei","Dany","Noah","Amelia","Oliver","Olivia","George","Isla","Leo","Ava","Theo","Freya","Arthur","Mia","Freddie","Willow","Harry","Evie","Charlie","Lilly", "Jack", "Grace" };
    void get_in_the_transport(int val) override
    {
        cout << schoolers[val] <<  " gets in the bus" << endl;
    }

    void get_out_from_the_transport() //override
    {
        cout <<" He/She gets out from the bus" << endl;
    }

    void pay_for_ride()override
    {
        cout << "He/she pays for the public transportation" << endl;
    }

    void check_ride(string val){
        if(val == "false"){
            cout << "Schooler is about to be late so he decided to take the car instead" << endl;
        }else{
            cout << "Schooler has time in his hands so he can comfortably go to school without a rush " << endl;
        }
    }

    void study_at_school() override
    {
    cout <<"The schooler is ready for a new day at school and he hopes is gonna be a productive day" << endl;
    }

};
