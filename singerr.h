#pragma once
#include "iostream"
#include "personn.h"
using namespace std;

class Interpret:public Person
{
public:
    string singers[4] = {"Gaga", "Timberlake", "Grande","Kanye"};

    void get_the_singers(int n){
        cout << singers[n] << " has to perform today" << endl;
    }

    void drive() override
    {
    	cout << "The singer gets in his Ferrari" << endl;
    }

    void arrive() override
    {
    	cout << "The singer is at the cocert" << endl;
    }

    void sing_at_concert() override
    {
        cout << "The performance of the singer is one of the best of the singer's carrer" << endl;
    }

};
