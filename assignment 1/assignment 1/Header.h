//
//  Header.h
//  assignment 1
//
//  Created by Youssef Ibrahim on 9/24/22.
//

#ifndef Header_h
#define Header_h
#include <iostream>
#include <string>
#include <queue>
#include <cstdlib>
#include <time.h>
using namespace std;
int roadacar,roadbcar,roadccar;

class car
{
    private:
        string car_brand,car_type,car_plate;
        int speed, year_model;
    
    public:
    car(){
        car_brand = "";
        car_type = "";
        car_plate = "";
        speed = 0;
        year_model = 0;
    }
        void Constructor(string brand, string type, string plate, int car_speed, int model)
        {
            car_brand=brand;
            while(type!="bus"&&type!="private"&&type!="motorcycle"&&type!="truck")
            {
                cout << "invalid car type enter car type:" << endl;
                cin >> type;
            }
            car_type=type;
            car_plate=plate;
            speed=car_speed;
            year_model=model;
        }
        void setcarbrand(string brand)
        {
            car_brand=brand;
        }
        void setcartype(string type)
        {
            while(type!="bus"&&type!="private"&&type!="motorcycle"&&type!="truck")
            {
                cout << "invalid car type enter car type:" << endl;
                cin >> type;
            }
            car_type=type;
        }
        void setcarplate(string plate)
        {
            car_plate=plate;
        }
        void setyear(int year)
        {
            year_model=year;
        }
        void setspeed(int speedofcar)
        {
            speed=speedofcar;
        }
        string getcarbrand()
        {
            return car_brand;
        }
        string getcartype()
        {
            return car_type;
        }
        string getcarplate()
        {
            return car_plate;
        }
        int getyear()
        {
            return year_model;
        }
        int getspeed()
        {
            return speed;
        }
    
    
};

class road
{
    private:
        char road_type;
        int speed_limit;
    
    public:
    road()
    {
        road_type = ' ';
        speed_limit=100;
    }
        void Constructor(char type, int speed)
        {
            while(type!='a' && type!='A' && type!='b' && type!='B' && type!='c' && type!='C')
                {
                    cout << "road type unidentified" << endl;
                    cin >> type;
                };
            road_type=type;
            speed_limit=speed;
        }
        void setroadtype(char typeofroad)
        {
            while(typeofroad!='a' && typeofroad!='A' && typeofroad!='b' && typeofroad!='B' && typeofroad!='c' && typeofroad!='C')
                {
                    cout << "road type unidentified" << endl;
                    cin >> typeofroad;
                };
        }
        void setspeedlimit(int speedlimit)
        {
            speed_limit=speedlimit;
        }
        char getroadtype()
        {
            return road_type;
        }
        int getspeedlimit()
        {
            return speed_limit;
        }
        bool radar(int speedofthecar)
        {
            if(speedofthecar>100)
                return true;
            else
                return false;
        }
        void allowa(string cartype)
        {
            if((cartype=="private" || cartype=="motorcycle"))
            {
                cout << "car allowed" << endl;
                roadacar++;
            }
            else
                cout << "vehicle not allowed" << endl << endl << endl<< endl;
        }
        void allowb(string cartype)
        {
                cout << "car allowed" << endl;
                roadbcar++;
        }
        void allowc(string cartype)
        {
            
            if(cartype=="truck")
            {
                cout << "car allowed" << endl;
                roadccar++;
            }
            else
                cout << "vehicle not allowed" << endl << endl << endl<< endl;
        }
        void age(int modelofyear)
        {
            cout << "car age:" << 2022-modelofyear << endl;
        }
    
};

#endif /* Header_h */
