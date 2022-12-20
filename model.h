#include "iostream"
#include "string"
#include "view.h"
#include "operatorr.h"
//#include "ride_type.h"
#include "week_typee.h"
#include "personn.h"
#include "economy_managementt.h"
#include "driverr.h"
#include "schollerr.h"
#include "carr.h"
//#include "admin.h"
#include "singerr.h"
#include "bookingg.h"
#include "cstdlib"
#include "stdlib.h"
#include "unistd.h"


using namespace std;

void play()
{
    srand ((NULL));
    Interpret singer_x;
    Car car_x;
    Driver driver_x;
    Schooler schooler_x;
    Income eco_x;
    Operator operator_x;
//    Ride_Type ride_x;
    Booking book_x;


    float driver_rating = 4;
    eco_x.cheltuieli = 0;

    while(true){

        book_x.increase_cmd = int(book_x.increase_nr_commands(driver_rating));
        book_x.nr_of_commands = ((rand() % 40)+20);
        book_x.nr_of_commands = book_x.nr_of_commands + book_x.increase_cmd;
        book_x.month_ride += book_x.nr_of_commands;

        // The begining of the day statistics
        beginDayResume(book_x.day, book_x.nr_of_commands);

        //Start the simulation
        for(int i = 0; i < book_x.nr_of_commands; i++){
            float distance = (rand() % 10)+15;
            int car = int(rand()%5);
            int drv_nr = int(rand()%5);

          //  string driver[4] = driver_x.get_the_command(drv_nr);
            operator_x.get_the_request();
            operator_x.assign_request_to_drivers();
            driver_x.get_the_command(drv_nr);
            car_x.start_engine(car);
            driver_x.drive();
            driver_x.arrive();
            car_x.stop_engine();
            driver_x.wait_customer();
            schooler_x.get_in_the_transport(int(rand()%23));
            car_x.start_engine(car);
            driver_x.drive();
            driver_x.arrive();
            car_x.stop_engine();
            schooler_x.pay_for_ride();
            driver_x.get_money_from_customer();
            schooler_x.get_out_from_the_transport();
                    if(car_x.model[car] == "Mazda"){
               // ride_x.ride_price = ride_x.ride_price_stnd(distance);
                car_x.fuel_standart = ((distance*8)/100) * 27.3;
                eco_x.cheltuieli = eco_x.cheltuieli + car_x.fuel_standart;
                displayDistance(distance);
                cout << "Fuel_standard : " << car_x.fuel_standart << " lei" << " | ";
              //  cout << "Rideprice : " << ride_x.ride_price << " lei" << " | ";
                cout << "\n";
            }else if(car_x.model[car] == "Tesla"){
               // ride_x.ride_price = ride_x.ride_price_prem(distance);
                car_x.fuel_premium = ((distance*15)/100) * 30;
                eco_x.cheltuieli = eco_x.cheltuieli + car_x.fuel_premium;
                displayDistance(distance);
                cout << "Fuel_premium : " << car_x.fuel_premium << " lei" << " | ";
               // cout << "Rideprice : " << ride_x.ride_price << " lei" << " | ";
                cout << "\n";
            }
            else if(car_x.model[car] == "Hyundai"){
               // ride_x.ride_price = ride_x.ride_price_stnd(distance);
                car_x.fuel_standart = ((distance*10)/100) * 27.7;
                eco_x.cheltuieli = eco_x.cheltuieli + car_x.fuel_standart;
                displayDistance(distance);
                cout << "Fuel_standart : " << car_x.fuel_standart << " lei" << " | ";
               // cout << "Rideprice : " << ride_x.ride_price << " lei" << " | ";
                cout << "\n";
            }else if(car_x.model[car] == "Toyota"){
              //  ride_x.ride_price = ride_x.ride_price_stnd(distance);
                car_x.fuel_standart = ((distance*6)/100) * 27.7;
                eco_x.cheltuieli = eco_x.cheltuieli + car_x.fuel_standart;
                displayDistance(distance);
                cout << "Fuel_standart : " << car_x.fuel_standart << " lei" << " | ";
              //  cout << "Rideprice : " << ride_x.ride_price << " lei" << " | ";
                cout << "\n";
            }else {
               // ride_x.ride_price = ride_x.ride_price_stnd(distance);
                car_x.fuel_standart = ((distance*4)/100) * 27.7;
                eco_x.cheltuieli = eco_x.cheltuieli + car_x.fuel_standart;
                displayDistance(distance);
                cout << "Fuel_standart : " << car_x.fuel_standart << " lei" << " | ";
               // cout << "Rideprice : " << ride_x.ride_price << " lei" << " | ";
                cout << "\n";
            }

            // eco_x.month_income = eco_x.total_inc(ride_x.ride_price);
//            eco_x.day_income = eco_x.calculate_income1(ride_x.ride_price);
        //    eco_x.total_incomes = eco_x.calculate_income2(ride_x.ride_price);
// eco_x.month_income = eco_x.calculate_income3(ride_x.ride_price);

        //    if(driver == "Tom"){
         //       eco_x.tom_daily_income += ride_x.ride_price;
        //        eco_x.tom_total_income += ride_x.ride_price;
         //   }else if (driver == "Andrew") {
         //       eco_x.andrew_daily_income += ride_x.ride_price;
          //      eco_x.andrew_total_income += ride_x.ride_price;
         //   }

            cout << "\n";
        }

        // The end of the day statistics
        endDayResume(eco_x.day_income, eco_x.tom_daily_income, eco_x.andrew_daily_income, eco_x.month_income, eco_x.cheltuieli, book_x.day);



        // reset values
        eco_x.day_income = 0;
        eco_x.income = 0;
        eco_x.tom_daily_income = 0;
        eco_x.andrew_daily_income = 0;
        book_x.day++;

        if(book_x.day == 31){
            // call the report function
            cout << "\n";
            statistics(book_x.month, eco_x.month_income, eco_x.cheltuieli, book_x.month_ride);
            cout << "---------------------------------------------------------------------------------------------------------------------------------------------------";
            book_x.day = 1;
            eco_x.cheltuieli = 0;
            book_x.month =  book_x.month + 1;
            eco_x.month_cheltuieli = 0;
            eco_x.month_income = 0;
        }

        sleep(1);
    }
}

