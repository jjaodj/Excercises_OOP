#ifndef PREMIUM_H
#define PREMIUM_H

#include "Header.h"

class Premium: public Room
{
    public:
        Premium();
        Premium(string,int,float);
        void setPriceService(float);
        float getPriceService();
        void nhap();
        void xuat();
        float getBills();
        virtual ~Premium();

    protected:

    private:
        float PriceService;
};

#endif // PREMIUM_H
