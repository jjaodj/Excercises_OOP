#ifndef ROOM_H
#define ROOM_H

#include <iostream>
#include "fstream"

using namespace std;

class Room
{
    public:
        Room();
        Room(string,int);
        void setID(string);
        void setNightDay(int);
        string getID();
        int getNightDay();
        virtual void nhap() = 0;
        virtual void xuat() = 0;
        virtual float getBills() = 0;
        virtual ~Room();

    protected:
        string id;
        int NightDay;

    private:
};

#endif // ROOM_H
