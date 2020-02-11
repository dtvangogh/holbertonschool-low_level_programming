#include "holberton.h"

/**
* jack_bauer - prints every minute of the day
*
* Return: Always 0.
**/


void jack_bauer(void)
{
int hourst;
int hourso;
int minutest;
int minuteso;
for (hourst = 0; hourst <= 2; hourst++)
{
for (hourso = 0; hourso <= 9; hourso++)
{
for (minutest = 0; minutest <= 5; minutest++)
{
for (minuteso = 0; minuteso <= 9; minuteso++)
{
_putchar(hourst + '0');
_putchar(hourso + '0');
_putchar(':');
_putchar(minutest + '0');
_putchar(minuteso + '0');
_putchar('\n');
while (hourst == 2 && hourso == 3 && minutest == 5 && minuteso == 9)
{}

{

}}}}}}
