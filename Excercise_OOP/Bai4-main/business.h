#ifndef BUSINESS_H
#define BUSINESS_H

#include "Header.h"

class Business: public Room
{
    public:
        Business();
        Business(string,int);
        void nhap();
        void xuat();
        float getBills();
        virtual ~Business();

    protected:

    private:
};

#endif // BUSINESS_H
