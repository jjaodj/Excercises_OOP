#include "deluxe.h"

Deluxe::Deluxe()
{
    this->id = "";
    this->NightDay = 0;
    this->PriceService = 0;
    this->PricePV = 0;
}

Deluxe::Deluxe(string id, int NightDay, float PriceService, float PricePV)
{
    this->id = id;
    this->NightDay = NightDay;
    this->PriceService = PriceService;
    this->PricePV = PricePV;
}

void Deluxe::setPriceService(float PriceService)
{
    if(PriceService > 0)
        this->PriceService = PriceService;
    else
    {
        cout << "Gia dich vu khong hop le" << endl;
        this->PriceService = 0;
    }
}

float Deluxe::getPriceService()
{
    return this->PriceService;
}

void Deluxe::setPricePV(float PricePV)
{
    if(PricePV >= 0)
        this->PricePV = PricePV;
    else
    {
        cout << "Gia phuc vu khong hop le" << endl;
        this->PricePV = 0;
    }
}

float Deluxe::getPricePV()
{
    return this->PricePV;
}

void Deluxe::nhap()
{
    string id;
    int NightDay;
    float PriceService, PricePV;
    cin.ignore();
    cout << "Nhap ID: ";
    getline(cin,id);
    cout << "Nhap so ngay: ";
    cin >> NightDay;
    cout << "Nhap gia dich vu: ";
    cin >> PriceService;
    cout << "Nhap gia phuc vu: ";
    cin >> PricePV;
    this->setID(id);
    this->setNightDay(NightDay);
    this->setPriceService(PriceService);
    this->setPricePV(PricePV);
}

void Deluxe::xuat()
{
    cout << "ID: " << this->getID() << endl;
    cout << "So ngay: " << this->getNightDay() << endl;
    cout << "Gia phong: " << this->getPriceService() << endl;
    cout << "Gia phuc vu: " << this->getPricePV() << endl;
}

float Deluxe::getBills()
{
    return (750000  * this->getNightDay() + this->getPriceService()) * (1 + this->getPricePV());
}

Deluxe::~Deluxe()
{
    //dtor
}
