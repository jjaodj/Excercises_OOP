#include <iostream>
#include "Customer.h"
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    ifstream file;
    file.open("D://duy.txt");
    if (!file.is_open())
    {
        cout << "Can't open file\n";
    }
    else
    {
        int x, y, z;
        file >> x;
        file >> y;
        file >> z;
        vector<Customer *> Vcustomer;
        Vcustomer.resize(0);
        double Sum = 0;
        for (int i = 0; i < x; i++)
        {
            Vcustomer.push_back(new CustomerA);
            Vcustomer.back()->operator>>(file);
            Sum += Vcustomer.back()->GetMoneyPay();
        }
        for (int i = 0; i < y; i++)
        {
            Vcustomer.push_back(new CustomerB);
            Vcustomer.back()->operator>>(file);
            Sum += Vcustomer.back()->GetMoneyPay();
        }
        for (int i = 0; i < z; i++)
        {
            Vcustomer.push_back(new CustomerC);
            Vcustomer.back()->operator>>(file);
            Sum += Vcustomer.back()->GetMoneyPay();
       }
       file.close();
        ofstream File("duy.OUT.txt");
        File << x << " " << y << " " << z << endl;
        for (int i = 0; i < Vcustomer.size(); i++)
        {
            (*Vcustomer[i]).operator<<(File);
        }
        File << "Tong tien cong ty nhan duoc: " << Sum << endl;
        File.close();
    }
    return 0;
}