#define  RCC_APB2ENR  ((*(volatile unsigned long *)  0x40021018))
#define  GPIOA_CRL      0x40010800
#define  GPIOA_ODR      0x4001080C

#define PORTA 1
#define PORTB 2

#define INPUT  0
#define OUT_10 1
#define OUT_2  2
#define OUT_50 3

#define G_PUSH  0
#define G_OD    1
#define AF_PUSH 2
#define AF_OD   3

#define AN_IN   0
#define FL_IN   1
#define PL_IN   2

#define HIGH  1
#define LOW   0


void pin_init(unsigned int PORT,unsigned int PIN,unsigned int DIR, unsigned int OPTION);
void pin_out(unsigned int PIN, unsigned int VAL);
void delay(int);
