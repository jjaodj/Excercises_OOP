#ifndef DELUXE_H
#define DELUXE_H

#include "Header.h"

class Deluxe: public Room
{
    public:
        Deluxe();
        Deluxe(string,int,float,float);
        void setPricePV(float);
        float getPricePV();
        void setPriceService(float);
        float getPriceService();
        void nhap();
        void xuat();
        float getBills();
        virtual ~Deluxe();

    protected:

    private:
        float PricePV;
        float PriceService;

};

#endif // DELUXE_H
