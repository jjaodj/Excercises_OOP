#include "Header.h"

Room::Room()
{
    this->id = "";
    this->NightDay = 0;
}

Room::Room(string id, int NightDay)
{
    this->id = id;
    this->NightDay = NightDay;
}

void Room::setID(string id)
{
    if(id.length() > 0)
        this->id = id;
    else 
    {
        cout << "ID khong hop le" << endl;
        this->id="";
    }
}

void Room::setNightDay(int NightDay)
{
    if(NightDay > 0)
        this->NightDay = NightDay;
    else
    {
        cout << "So ngay khong hop le" << endl;
        this->NightDay = 0;
    }
}

string Room::getID()
{
    return this->id;
}

int Room::getNightDay()
{
    return this->NightDay;
}

Room::~Room()
{
    //dtor
}
