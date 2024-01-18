#pragma once
#include <string>
#include <iostream>
#include <limits>

using namespace std;

class Customer
{
private:
    std::string Name;
    float MoneyPay;
    int numPurchase;
    float UnitPrice;

public:
    
    Customer(const std::string name, int numpurchase, float price);
    Customer();
    ~Customer();
    
    void SetMoneyPay(float money);
    void SetName(std::string name);
    void SetnumPurchase(int n);
    void SetUnitprice(float price);

    std::string GetName() { return Name; }

    int GetnumPurchase() { return numPurchase; }
    float GetMoneyPay() { return MoneyPay; }
    float GetUnitPrice() { return UnitPrice; }
    

    std::ostream &operator<<(std::ostream &os)
    {
        os << "Ten: " << GetName() << std::endl;
        os << "So tien khach tra: " << GetMoneyPay() << std::endl;
        return os;
    }

    virtual std::istream &operator>>(std::istream &is)
    {
        std::string name;
        is.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(is, name);
        SetName(name);
        int num;
        is >> num;
        SetnumPurchase(num);
        float price;
        is >> price;
        SetUnitprice(price);
        this->CaculateMoneyPay();
        return is;
    }

    virtual void CaculateMoneyPay() = 0;
};


class CustomerA : public Customer
{
public:
    
    CustomerA();
    CustomerA(const std::string name, int numpurchase, float price);
    ~CustomerA();
   
    virtual void CaculateMoneyPay();
};


class CustomerB : public Customer
{
private:
    int UsageYear;
    float Discount;

public:
    
    CustomerB();
    CustomerB(const std::string name, int numpurchase, float price, int year);

    ~CustomerB();
 
    void SetUsageYear(int year);
    void SetDiscount();
    int GetUsageYear() { return UsageYear; }
    float GetDiscount() { return Discount; }
    
    std::istream &operator>>(std::istream &is)
    {
        Customer::operator>>(is);
        int year;
        is >> year;

        SetUsageYear(year);
        CaculateMoneyPay();

        return is;
    }
    virtual void CaculateMoneyPay();
};

class CustomerC : public Customer
{
public:
    
    CustomerC(const std::string name, int numpurchase, float price);
    CustomerC();

    ~CustomerC();
    
    virtual void CaculateMoneyPay();
};
