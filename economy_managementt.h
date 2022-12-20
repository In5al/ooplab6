#pragma once
#include "iostream"
using namespace std;

class Economy_Management
{
public:
    int cheltuieli = 0;
    float month_cheltuieli = 0;
    float month_income = 0;

};

class Income:public Economy_Management
{
public:
    float tom_daily_income = 0;
    float andrew_daily_income = 0;
    float tom_total_income = 0;
    float andrew_total_income = 0;
    float income = 0;
    float total_incomes = 0;
    float day_income = 0;

    float calculate_income1(int ride_price){
        income = income + ride_price;
        return int(income);
    }
    float calculate_income2(int ride_price){
        total_incomes = total_incomes + ride_price;
        return int(total_incomes);
    }
    float calculate_income3(int ride_price){
        month_income = month_income + ride_price;
        return int(month_income);
    }

};

