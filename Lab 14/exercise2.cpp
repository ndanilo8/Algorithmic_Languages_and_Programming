// ISS Class

#include <stdio.h>
#include <iostream>

class ISS
{
private:
    /* data */
public:

    int ColumbusEuropeanLab;
    int HarmonicNode;
    int Pma;
    int Ida;
    int KiboJemPm;
    
    
    ISS(/* args */){ printf("Constructer 1 ISS call  \n"); }

    ISS(int columbusEuropeanLab,int harmonicNode, int pma, int ida,int kiboJemPm)
    {
        printf("constructer 2 ISS call  \n");
        this->ColumbusEuropeanLab = columbusEuropeanLab;
        this->HarmonicNode = harmonicNode;
        this->Pma = pma;
        this->Ida = ida;
        this->KiboJemPm = kiboJemPm;
    }

    ~ISS(){ printf("Destructure ISS\n");}

    void print() {
        std::cout << " ColumbusEuropeanLab: " << ColumbusEuropeanLab << " Harmonic Node: " << HarmonicNode << " PMA: "<< Pma << " IDA: " << Ida << " KIBO JEM PM: " << KiboJemPm << std::endl;

    }
};


int main(){

ISS *iss_1 = new ISS(1,2,5,3,4);

iss_1->print();

delete iss_1;

    return 0;
}