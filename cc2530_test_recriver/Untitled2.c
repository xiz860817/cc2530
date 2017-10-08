#include "ioCC2530.h"

#define  LED6   P1_4
#define  LED3   P1_0
#define  LED4   P1_1
/*===================��?��?=========================*/
void Delay(unsigned int t)
{
  while(t--);
}
/*==================�ݤf��l�ƨ�?=====================*/
void Init_Port()
{
  //?P1_0�BP1_1�MP1_4?�m?�q��I/O�ݤf�\��
  P1SEL &= ~0x13;   
  //?P1_0�BP1_1�MP1_4���ݤf??�覡?�m??�X
  P1DIR |= 0x13;   
  LED6 = 0;
  LED3 = 0;
  LED4 = 0;
}
/*==================�]??�l��?=====================*/
void LED_Running()
{
  LED3 = 1;
  Delay(50000);
  LED4 = 1;
  Delay(50000);
  LED3 = 0;
  Delay(50000);
  LED4 = 0;
  Delay(50000);
}

void main()
{
  Init_Port();          //��l�Ƴq��I/O�ݤf
  while(1)
  {
    LED_Running();     //�]??
  }
}