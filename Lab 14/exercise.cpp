#include <iostream>

class Airplane
{
public:
    int Fuselage; // atribute of the function
    int *Wings;

    Airplane() { printf("Constructer 1 Airplane call  \n"); }

    Airplane(int fuselage, int *wings)
    {
        printf("constructer 2 Airplane call  \n");
        this->Fuselage = fuselage;
        this->Wings = wings;
    }

    ~Airplane() { printf("Destructure Airplane\n"); }


    void print()
    {
        printf("Fuselage diameter %d\n", this->Fuselage);
        printf("Wings %d\n", this->Wings[0]);
    }
   

private:
    /* data */
protected:
};

class Airbase : Airplane { // enheretence

public:
    int cockpit;

    Airbase(): Airplane() {this->cockpit =1;}

private:

protected:

};

int main()
{

    Airplane *airplane_1 = new Airplane();
    Airplane *airplane_2 = new Airplane(4, new int[2]{1, 2});

    airplane_2->print();

    delete airplane_1;
    delete airplane_2;


printf("\nAirbase\n");
Airbase* airBase = new Airbase();
    


    return 0;
}