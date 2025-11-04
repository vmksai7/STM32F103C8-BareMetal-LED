#include "GPIO.h"

void pin_init(unsigned int PORT,unsigned int PIN,unsigned int DIR, unsigned int OPTION)
{

	    volatile unsigned long *xy = 0;
	    unsigned long offset = 0X00;

	    if(PIN >= 8)// 9
			{

				offset = 1;
				PIN -= 8;
			}

			if(PORT == PORTA)
			{
				  RCC_APB2ENR |= (1<<2);
					xy = (volatile unsigned long *)GPIOA_CRL + offset;
			}
			*xy &=  ~(0XF  << PIN *4);
			*xy  |=  (DIR << PIN *4) | (OPTION << (PIN *4+2));

}

void pin_out(unsigned int PIN, unsigned int VAL)
{
	volatile unsigned long *out = 0;

	 out = (volatile unsigned long *) GPIOA_ODR;// + offset;
	if(VAL == HIGH)
	{
	 *out = (VAL << PIN);
	}
	else
	{
		*out &= ~(1<<PIN);
	}
}

void delay(int d){
	for(int i=0; i<d; i++){
		for(int j=0; j<8000; j++){}
	}
}
