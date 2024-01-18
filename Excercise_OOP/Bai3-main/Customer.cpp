#include <iostream>
#include "Customer.h"
using namespace std;

//Main class
Customer::Customer(const std::string name, int numpurchase, float price)
{
    SetName(name);
    SetnumPurchase(numPurchase);
    SetUnitprice(price);
}

Customer::Customer()
{
    SetName("");
    SetnumPurchase(0);
    SetUnitprice(0);
}

Customer::~Customer(){}

void Customer::SetMoneyPay(float money)
{
    MoneyPay = money;
}

void Customer::SetnumPurchase(int n)
{
    numPurchase = n;
}

void Customer::SetUnitprice(float price)
{
    UnitPrice = price;
}

void Customer::SetName(std::string name){
    Name=name;
}


//Customer A 
CustomerA::CustomerA(){}

CustomerA::CustomerA(const std::string name, int numpurchase, float price) : Customer(name, numpurchase, price)
{
    CaculateMoneyPay();
}

CustomerA::~CustomerA(){}

void CustomerA::CaculateMoneyPay()
{
    float money;
    money = GetnumPurchase() * GetUnitPrice() * (1 + 0.1);
    SetMoneyPay(money);
}

//Customer B 

CustomerB::CustomerB()
{
    SetUsageYear(0);
    SetDiscount();
}

CustomerB::CustomerB(const std::string name, int numpurchase, float price, int year) : Customer(name, numpurchase, price)
{
    SetUsageYear(year);
}
CustomerB::~CustomerB(){}


void CustomerB::SetUsageYear(int year)
{
    UsageYear = year;
}

void CustomerB::SetDiscount()
{
    Discount = GetUsageYear() * 5 / 100;
    if (Discount > 0.5)
    {
        Discount = 0.5;
    }
}

void CustomerB::CaculateMoneyPay()
{
    SetDiscount();
    float money;
    money = GetnumPurchase() * GetUnitPrice() * (1 - GetDiscount()) * (1 + 0.1);
    SetMoneyPay(money);
}

//Customer C 

CustomerC::CustomerC(const std::string name, int numpurchase, float price):Customer(name,numpurchase,price){
}
CustomerC::CustomerC(){}

CustomerC::~CustomerC(){}

void CustomerC::CaculateMoneyPay()
{
    float money;
    money = GetnumPurchase() * GetUnitPrice() *0.5* (1 + 0.1);
    SetMoneyPay(money);
}