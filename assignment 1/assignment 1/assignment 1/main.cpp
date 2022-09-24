//
//  main.cpp
//  assignment 1
//
//  Created by Youssef Ibrahim on 9/18/22.
//

#include <iostream>
#include <string>
#include <queue>
#include <cstdlib>
#include <time.h>
#include "Header.h"
using namespace std;


int main()
{
    queue<car> carqueue;
    srand( static_cast<unsigned int>(time(nullptr)));
    
    car c1,c2,c3,c4,c5,c6,c7,c8,c9,c10,c11,c12,c13,c14,c15,c16,c17,c18,c19,c20;
    c1.car::Constructor( "ford", "bus" ,"ABC100" ,rand()%150+1, rand()%52+1970);
    c2.car::Constructor( "mercedes", "private","ABC101", rand()%150+1, rand()%52+1970);
    c3.car::Constructor( "mclaren", "motorcycle","ABC102",rand()%150+1, rand()%52+1970);
    c4.car::Constructor( "astonmartin", "truck","ABC103",rand()%150+1, rand()%52+1970);
    c5.car::Constructor( "skoda", "bus","ABC104",rand()%150+1, rand()%52+1970);
    c6.car::Constructor( "honda", "private","ABC105",rand()%150+1, rand()%52+1970);
    c7.car::Constructor( "hyundai", "motorcycle","ABC106",rand()%150+1, rand()%52+1970);
    c8.car::Constructor( "maserati", "truck","ABC107",rand()%150+1, rand()%52+1970);
    c9.car::Constructor( "byd", "bus","ABC108",rand()%150+1, rand()%52+1970);
    c10.car::Constructor( "ferrari", "private","ABC109",rand()%150+1, rand()%52+1970);
    c11.car::Constructor( "toyota", "motorcycle","ABC110",rand()%150+1, rand()%52+1970);
    c12.car::Constructor( "miata", "truck","ABC111",rand()%150+1, rand()%52+1970);
    c13.car::Constructor( "mg", "bus","ABC112",rand()%150+1, rand()%52+1970);
    c14.car::Constructor( "volkswagen", "private","ABC113",rand()%150+1, rand()%52+1970);
    c15.car::Constructor( "lamborghini", "motorcycle","ABC114",rand()%150+1, rand()%52+1970);
    c16.car::Constructor( "renault", "truck","ABC115",rand()%150+1, rand()%52+1970);
    c17.car::Constructor( "tesla", "bus","ABC116",rand()%150+1, rand()%52+1970);
    c18.car::Constructor( "porsche", "private","ABC117",rand()%150+1, rand()%52+1970);
    c19.car::Constructor( "bmw", "motorcycle","ABC118",rand()%150+1, rand()%52+1970);
    c20.car::Constructor( "bentley", "truck","ABC119",rand()%150+1, rand()%52+1970);
    carqueue.queue::push(c1);
    carqueue.queue::push(c2);
    carqueue.queue::push(c3);
    carqueue.queue::push(c4);
    carqueue.queue::push(c5);
    carqueue.queue::push(c6);
    carqueue.queue::push(c7);
    carqueue.queue::push(c8);
    carqueue.queue::push(c9);
    carqueue.queue::push(c10);
    carqueue.queue::push(c11);
    carqueue.queue::push(c12);
    carqueue.queue::push(c13);
    carqueue.queue::push(c14);
    carqueue.queue::push(c15);
    carqueue.queue::push(c16);
    carqueue.queue::push(c17);
    carqueue.queue::push(c18);
    carqueue.queue::push(c19);
    carqueue.queue::push(c20);
    
    road a,b,c;
    a.road::setroadtype('A');
    b.road::setroadtype('B');
    c.road::setroadtype('C');
    
    while (!carqueue.empty())
        {
        if((rand()%3+1)==1)
            a.road::allowa(carqueue.queue::front().car::getcartype());
        if((rand()%3+1)==2)
            b.road::allowb(carqueue.queue::front().car::getcartype());
        if((rand()%3+1)==3)
            c.road::allowc(carqueue.queue::front().car::getcartype());
        if(a.radar(carqueue.queue::front().car::getspeed())==true)
            cout << "car type:" << carqueue.queue::front().car::getcartype() << endl <<"car speed:" <<carqueue.queue::front().car::getspeed() << endl <<"car year:"<< carqueue.queue::front().car::getyear() <<endl << "car brand:" << carqueue.queue::front().car::getcarbrand() << endl << "car plate:" << carqueue.queue::front().car::getcarplate()<< endl <<"this car will be fined" << endl;
        else
            cout << "car under speed limit" << endl;
        a.road::age(carqueue.queue::front().car::getyear());
        cout << endl << endl << endl;
        carqueue.queue::pop();
        }
    
    cout << "road a:" << roadacar << " vehicles" << endl;
    cout << "road b:" << roadbcar << " vehicles" << endl;
    cout << "road c:" << roadccar << " vehicles" << endl;
    
    if(roadacar>=roadbcar && roadacar>=roadccar)
        cout << "efficiency of road a: 100%" << endl << "efficiency of road b:" << (roadbcar*100/roadacar) << "%" << endl << "efficiency of road c:" << (roadccar*100/roadacar) << "%" << endl;
    if(roadbcar>=roadacar && roadbcar>=roadccar)
        cout << "efficiency of road b: 100%" << endl << "efficiency of road a:" << (roadacar*100/roadbcar) << "%" << endl << "efficiency of road c:" << (roadccar*100/roadbcar) << "%" << endl;
    if(roadccar>=roadbcar && roadccar>=roadacar)
        cout << "efficiency of road c: 100%" << endl << "efficiency of road b:" << (roadbcar*100/roadccar) << "%" << endl << "efficiency of road a:" << (roadacar*100/roadccar) << "%" << endl;
    
    
    return 0;
}
