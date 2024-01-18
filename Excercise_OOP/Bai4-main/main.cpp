#include "Header.h"
#include "Deluxe.h"
#include "Business.h"
#include "Premium.h"
#include "vector"
#include <iomanip>

int main()
{
    ifstream Fi("input2.txt");ofstream Fo("output2.txt");
    int d,p,b;
    Fi >> d >> p >> b;
    vector<Room*> rooms;
    long long a1[d];
    long long a2[p];
    long long a3[b];
    long long sumd = 0;
    long long sump = 0;
    long long sumb = 0;
    for(int i=0;i<d;i++)
    {
        Fi.ignore();
        string id;
        int nd;
        float pv,ps;
        Fi >> id >> nd >> pv >> ps;
        Deluxe *d = new Deluxe(id,nd,pv,ps);
        rooms.push_back(d);
    }
    for(int i=0;i<p;i++)
    {
        Fi.ignore();
        string id;
        int nd;
        float ps;
        Fi >> id >> nd >> ps;
        Premium *p = new Premium(id,nd,ps);
        rooms.push_back(p);
    }
    for(int i=0;i<b;i++)
    {
        Fi.ignore();
        string id;
        int nd;
        Fi >> id >> nd;
        Business *b = new Business(id,nd);
        rooms.push_back(b);
    }
    int c1=0;
    int c2=0;
    int c3=0;
    for(int i=0;i<rooms.size();i++)
    {
        string tmp = rooms[i]->getID();
        if(tmp[0] == 'D')
        {
            sumd += rooms[i]->getBills() * 1LL;
            a1[c1++] = rooms[i]->getBills() * 1LL;
        }
        else if(tmp[0] == 'P')
        {
            sump += rooms[i]->getBills() * 1LL;
            a2[c2++] = rooms[i]->getBills() * 1LL;
        }
        else if(tmp[0] == 'B')
        {
            sumb += rooms[i]->getBills() * 1LL;
            a3[c3++] = rooms[i]->getBills() * 1LL;
        }
    }
    Fo << d << ' ' << p << ' ' << b << endl;
    Fo << "Tong doanh thu loai phong Deluxe: " << sumd << fixed <<  endl;
    Fo << "Tong doanh thu loai phong Premium: " << sump << fixed << endl;
    Fo << "Tong doanh thu loai phong Business: " << sumb << fixed << endl;
    Fi.close();
    Fo.close();
    //-----------------
    ifstream Fi2("input.txt");ofstream Fo2("output.txt");
    Fi2 >> d >> p >> b;
    vector<Room*> rooms2;
    sumd = 0;
    sump = 0;
    sumb = 0;
    for(int i=0;i<d;i++)
    {
        Fi2.ignore();
        string id;
        int nd;
        float pv,ps;
        Fi2 >> id >> nd >> pv >> ps;
        Deluxe *d = new Deluxe(id,nd,pv,ps);
        rooms2.push_back(d);
    }
    for(int i=0;i<p;i++)
    {
        Fi2.ignore();
        string id;
        int nd;
        float ps;
        Fi2 >> id >> nd >> ps;
        Premium *p = new Premium(id,nd,ps);
        rooms2.push_back(p);
    }
    for(int i=0;i<b;i++)
    {
        Fi2.ignore();
        string id;
        int nd;
        Fi2 >> id >> nd;
        Business *b = new Business(id,nd);
        rooms2.push_back(b);
    }
    c1 = 0;
    c2 = 0;
    c3 = 0;
    for(int i=0;i<rooms2.size();i++)
    {
        string tmp = rooms2[i]->getID();
        if(tmp[0] == 'D')
        {
            sumd += rooms2[i]->getBills() * 1LL;
            if(rooms2[i]->getBills() * 1LL >= a1[c1]*1.25)
                ++c1;
        }
        else if(tmp[0] == 'P')
        {
            sump += rooms2[i]->getBills() * 1LL;
            if(rooms2[i]->getBills() * 1LL >= a2[c2]*1.25)
                ++c2;
        }
        else if(tmp[0] == 'B')
        {
            sumb += rooms2[i]->getBills() * 1LL;
            if(rooms2[i]->getBills() * 1LL >= a3[c3]*1.25)
                ++c3;
        }
    }
    Fo2 << d << ' ' << p << ' ' << b << endl;
    Fo2 << "Tong doanh thu loai phong Deluxe: " << sumd << fixed <<  endl;
    Fo2 << "Tong doanh thu loai phong Premium: " << sump << fixed << endl;
    Fo2 << "Tong doanh thu loai phong Business: " << sumb << fixed << endl;
    Fo2 << "So phong vuot troi: " << c1 + c2 + c3 << '\n';
    for(int i=0;i<rooms2.size();i++)
    {
        string tmp = rooms2[i]->getID();
        if(tmp[0] == 'D')
        {
            sumd += rooms2[i]->getBills() * 1LL;
            if(rooms2[i]->getBills() * 1LL >= a1[c1]*1.25)
            {
                Fo << "Ma phong vuot troi: " << rooms2[i]->getID() << endl;
                ++c1;
            }
        }
        else if(tmp[0] == 'P')
        {
            sump += rooms2[i]->getBills() * 1LL;
            if(rooms2[i]->getBills() * 1LL >= a2[c2]*1.25)
            {
                Fo << "Ma phong vuot troi: " << rooms2[i]->getID() << endl;
                ++c2;
            }
        }
        else if(tmp[0] == 'B')
        {
            sumb += rooms2[i]->getBills() * 1LL;
            if(rooms2[i]->getBills() * 1LL >= a3[c3]*1.25)
            {
                Fo << "Ma phong vuot troi: " << rooms2[i]->getID() << endl;
                ++c3;
            }
        }
    }
    Fi2.close();
    Fo2.close();
    return 0;
}
