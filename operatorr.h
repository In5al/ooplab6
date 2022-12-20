#pragma once
#include "iostream"
#include "personn.h"
using namespace std;

class Operator:public Person
{
public:
    Operator(){
        name = "Jasmine";
        age = 34;
    }

    void get_the_request() override
    {
        cout << name << " just got the request" << endl;
    }

    void assign_request_to_drivers() override
    {
        cout << name << " assigned the request to one of the drivers " << endl;
    }

};
