#include "premium.h"

Premium::Premium()
{
    this->id = "";
    this->NightDay = 0;
    this->PriceService = 0;
}

Premium::Premium(string id, int NightDay, float PriceService)
{
    this->id = id;
    this->NightDay = NightDay;
    this->PriceService = PriceService;
}

void Premium::setPriceService(float PriceService)
{
    if(PriceService > 0)
        this->PriceService = PriceService;
    else
    {
        cout << "Gia dich vu khong hop le" << endl;
        this->PriceService = 0;
    }
}

float Premium::getPriceService()
{
    return this->PriceService;
}

void Premium::nhap()
{
    string id;
    int NightDay;
    float PriceService;
    cin.ignore();
    cout << "Nhap ID: ";
    getline(cin,id);
    cout << "Nhap so ngay: ";
    cin >> NightDay;
    cout << "Nhap gia dich vu: ";
    cin >> PriceService;
}

void Premium::xuat()
{
    cout << "ID: " << this->getID() << endl;
    cout << "So ngay: " << this->getNightDay() << endl;
    cout << "Gia dich vu: " << this->getPriceService() << endl;
}

float Premium::getBills()
{
    return (500000  * this->getNightDay() + this->getPriceService() )*1.05 ;
}

Premium::~Premium()
{
    //dtor
}
