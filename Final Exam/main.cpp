#include <stdio.h>
#include <string.h>

// Swap function
void f(double &p, double &e);


struct smart_chip {
	int VCC=1;
	int NC=2; // not connect 
	int RST = 2; // reset
	int CLK = 1; // clock
	int GND = 1; 
	int VPP = 1;
	int I_0 = 1;
};

struct creditCard {

	struct smart_chip smartChip;
	char bank_brand[100];
	char cardNumber[50];
	char card_holder_name[100];
	char expiration_date[10]; 
};

int main()
{

    printf("Hello!\n");

    // Step 3
     printf("\nStep 3\n");
    double var = 10;
    double *ptr;
    ptr = &var;
    printf("Value of the variable = %lf \n", *ptr);

    // Step 4
     printf("\nStep 4\n");
    double p = 2.7;
    double e = 3.14;

    printf("Before the swap: p = %lf , e = %lf \n", p , e);
    f(p, e);
    printf("After the swap: p = %lf , e = %lf \n", p , e);

    //Step 5
    printf("\nStep 5\n");
	struct creditCard myBillionaireAccount;
	
	strcpy_s(myBillionaireAccount.bank_brand, "DiamondBank");
	strcpy_s(myBillionaireAccount.cardNumber, "1234567890123456");
	strcpy_s(myBillionaireAccount.card_holder_name, "Danilo Nascimento");
	strcpy_s(myBillionaireAccount.expiration_date, "12/99");

	printf("Bank brand: %s\n", myBillionaireAccount.bank_brand);
	printf("Card number: %s\n", myBillionaireAccount.cardNumber);
	printf("Card Holder Name: %s\n", myBillionaireAccount.card_holder_name);
	printf("Card Expiration date: %s\n", myBillionaireAccount.expiration_date);

    return 0;
}

void f(double &p, double &e)
{
    double temp;
    temp = p;
    p = e;
    e = temp;
}