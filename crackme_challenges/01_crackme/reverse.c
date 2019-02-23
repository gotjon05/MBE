#include <stdio.h>



int main()
{

int buff;

printf("%s", "IOLI_Crackme_Level_0x01\n");
printf("%s", "Password:");
scanf("%d", &buff);






if(buff == 0x149a)
{
	printf("%s", "Password_OK_:)");
}else{
       printf("%s", "Invalid_Password");
}  






}
