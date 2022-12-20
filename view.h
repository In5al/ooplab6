#pragma once
#include <iostream>
#include <string>
using namespace std;

void displayDistance(int distance){
    cout << "Ride distance: " << distance << " km" << " | ";
}

void beginDayResume(int day, int cnt){
    cout << "\n";
    cout << "Day : "  << day << " | ";
    cout << "Nr of commands per day : " << cnt << endl;
    cout << "\n";
    cout << "\n";
    cout << "\n";
}

void endDayResume(float day_income, float tom_daily_income, float andrew_daily_income,int total_day_income,int cheltuieli, float day){
    cout << "\n";
    cout << "Income for this day : " << day_income << " lei" << endl;
    cout << "Tom : " << tom_daily_income << " lei" << endl;
    cout << "Andrew : " << andrew_daily_income << " lei" << endl;
    cout << "Total income : " << total_day_income << " lei" << endl;
    cout << "Cheltuieli : " << cheltuieli << " lei" << endl;
    cout << "Day : " << day  << endl;
}

void statistics(int month, int month_income, int cheltuieli, int months_rides){
    // statistica la sfirsit de luna
    cout << "Month : " << month << endl;
    cout << "Income for this month : " << month_income << endl;
    cout << "Cheltuieli for this month : " << cheltuieli << endl;
    cout << "Nr of commands for this month : " << months_rides << endl;

}
