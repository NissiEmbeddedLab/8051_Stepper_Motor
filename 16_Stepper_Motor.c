#include<reg51.h>
void Dtime(unsigned int c);
void main(void)
{
while(1)
{
	// Anticlock wise module
	P1 = 0x09;		 // A1 = 1, A2 = 0, B1 = 0, B2 = 1			
	Dtime(200);
	P1 = 0x05;		 // A1 = 0, A2 = 1, B1 = 0, B2 = 1
	Dtime(200);
	P1 = 0x06;		 // A1 = 0, A2 = 1, B1 = 1, B2 = 0
	Dtime(200);
	P1 = 0x0A;		 // A1 = 1, A2 = 0, B1 = 1, B2 = 0
	Dtime(200);  
	P1 = 0x09;		 // A1 = 1, A2 = 0, B1 = 0, B2 = 1			
	Dtime(200);
	P1 = 0x05;		 // A1 = 0, A2 = 1, B1 = 0, B2 = 1
	Dtime(200);
	P1 = 0x06;		 // A1 = 0, A2 = 1, B1 = 1, B2 = 0
	Dtime(200);
	P1 = 0x0A;		 // A1 = 1, A2 = 0, B1 = 1, B2 = 0
	Dtime(200);
	// clock wise module simply reverse the order
	P1 = 0x0A;
	Dtime(200);
	P1 = 0x06;
	Dtime(200);
	P1 = 0x05;
	Dtime(200);
	P1 = 0x09;
	Dtime(200);
	P1 = 0x0A;
	Dtime(200);
	P1 = 0x06;
	Dtime(200);
	P1 = 0x05;
	Dtime(200);
	P1 = 0x09;
	Dtime(200);
}
}
void Dtime(unsigned int c)
{
	unsigned int a,b ;
		for(a=0;a<c;a++)
			for(b=0;b<500;b++);
}