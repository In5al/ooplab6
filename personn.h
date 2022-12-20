#pragma once
#include "iostream"
using namespace std;

class Person
{
public:
    string name;
    int age;
    //----------------------------
    //Related to job

    virtual void study_at_school(){
        //
    }

    virtual void teach_the_students(){
        //
    }

    virtual void sing_at_concert(){
        //
    }

    virtual void play_the_role(){
        //
    }
    virtual void wait_customer(){
        //
    }
    virtual void get_money_from_customer(){
        //
    }
    virtual void get_the_request(){
        //
    }
    virtual void assign_request_to_drivers(){
        //
    }
//--------------------------------------------------
//Related to transportation
    virtual void drive()
    {
    	//
    }

    virtual void arrive()
    {
    	//
    }


    virtual void get_in_the_transport(int val){
        //
    }

    virtual void get_out_from_the_transport(){
        //
    }

    virtual void pay_for_ride(){
        //
    }
};
