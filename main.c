#include "GPIO.h"

int main()
{
	pin_init(PORTA,0,OUT_2,G_PUSH);

	while(1)
	{
		pin_out(0,HIGH);
		delay(50);
		pin_out(0,LOW);
		delay(50);
	}

}
