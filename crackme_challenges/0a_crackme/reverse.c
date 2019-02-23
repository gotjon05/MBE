#include <string.h>
#include <stdio.h>

//strcmp called once



int main()
{

char str [80];


//printf, scanf before loop
printf("%s", "Enter_password:");
scanf("%s", str);
	 
//true for jne must lead to "wrong" and loop continuation
while(strcmp(str, "g00dJ0B!") != 0)
{




puts("Wrong!\n");         



}



}

