#include "business.h"

Business::Business()
{
    this->id = "";
    this->NightDay = 0;
}

Business::Business(string id, int NightDay)
{
    this->id = id;
    this->NightDay = NightDay;
}

void Business::nhap()
{
    string id;
    int NightDay;
    float PriceService, PricePV;
    cin.ignore();
    cout << "Nhap ID: ";
    getline(cin,id);
    cout << "Nhap so ngay: ";
    cin >> NightDay;
    this->setID(id);
    this->setNightDay(NightDay);
}

void Business::xuat()
{
    cout << "ID: " << this->getID() << endl;
    cout << "So ngay: " << this->getNightDay() << endl;
}

float Business::getBills()
{
    return 300000  * this->getNightDay();
}

Business::~Business()
{
    //dtor
}
