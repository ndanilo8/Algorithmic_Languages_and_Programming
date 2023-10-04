#include <stdio.h>
#include <string_s.h>

struct point
{
	int x;
	int y;
};

struct point my_point = { 3,7 };

struct aircraft
{
	int cockpit;
	int fuselage;
	int turbine_engines;
	int wing;
	int horizontal_stabilizer;
	int vertical_stabilizer;

};

struct car {
	int engine;
	int suspension;
	int steering;
	char car_body[10];
	int transmission;
	char electrics[10];
	int exhaust;
	int wheels[4];
};

//ISO - 7816 standard pin - out
// https://www.researchgate.net/publication/340234262_DESIGN_AND_IMPLEMENTATION_OF_AN_E-VOTING_SYSTEM/figures?lo=1
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


int main() {
/*

 part 1 of lecture 9 part 1
	struct point p = { 1,3 };
	struct point q;
	q = p;

	printf(" x = %d, y = %d", q.x, q.y);

	 part2 of lecture 9 part 1
	struct point* p = &my_point;
	(*p).x = 8;
	p->y = 9;
	printf("x = %d y = %d", my_point.x, my_point.y);

*/

/*
// Exercise 1
	struct aircraft a320neo = { 1,1,2,2,1,1 }; // Declaration & init

	printf("Aircraft has: \n %d cockpit \n %d fuselage \n %d turbine engines \n %d wings \n %d horizontal stabilizer \n %d vertical stabilizer", a320neo.cockpit, a320neo.fuselage, a320neo.turbine_engines, a320neo.wing, a320neo.horizontal_stabilizer, a320neo.vertical_stabilizer);

	printf("\n\n");
*/
	
/*
	// Exercise 2
	struct car koenigsegg_jesko ;

	koenigsegg_jesko.engine= 1;
	koenigsegg_jesko.suspension = 4;
	koenigsegg_jesko.steering = 1;
	koenigsegg_jesko.transmission = 1;
	strcpy_s(koenigsegg_jesko.car_body, "Carbon");
	strcpy_s(koenigsegg_jesko.electrics, "too much");
	koenigsegg_jesko.exhaust = 2;
	koenigsegg_jesko.wheels[0] = 1;
	koenigsegg_jesko.wheels[1] = 1;
	koenigsegg_jesko.wheels[2] = 1;
	koenigsegg_jesko.wheels[3] = 1;


	printf("Koenigsegg Jesko V8 has:\n");
	printf("%d engine\n", koenigsegg_jesko.engine);
	printf("%d suspension\n", koenigsegg_jesko.suspension);
	printf("%d steering\n", koenigsegg_jesko.steering);
	printf("%s car body\n", koenigsegg_jesko.car_body);
	printf("%d transmission\n", koenigsegg_jesko.transmission);
	printf("%s electronics\n", koenigsegg_jesko.electrics);
	printf("%d exhaust\n", koenigsegg_jesko.exhaust);
	printf("%d FR wheels\n", koenigsegg_jesko.wheels[0]);
	printf("%d FL wheels\n", koenigsegg_jesko.wheels[1]);
	printf("%d RR wheels\n", koenigsegg_jesko.wheels[2]);
	printf("%d RL wheels\n", koenigsegg_jesko.wheels[3]);

*/

	
// Exercise 3 credit card
	printf("\n");
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