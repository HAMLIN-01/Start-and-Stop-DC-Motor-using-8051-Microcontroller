#include<regx52.h>
void delay(unsigned int);
void main()
{
while(1)
{
P1=0x05;
delay(5000);
P1=0x0A;
delay(5000);
P1=0x00;
delay(5000);
}}
void delay(unsigned int a)
{
unsigned char i;
for(;a>0;a--)
{
for(i=250;i>0;i--);
}}