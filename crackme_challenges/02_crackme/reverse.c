#include <stdio.h>




int main()
{

int buff;

// mov dword [esp], str.IOLI_Crackme_Level_0x02
printf("%s", "IOLI_Crackme_Level_0x02\n");
printf("%s", ".Password: ");
scanf("%d", &buff);


// mov dword [local_8h], 0x5a 
int num1 = 0x5a;
// mov dword [local_ch], 0x1ec
int num2 = 0x1ec;
int total =  0x00;

total = num1 + num2;
total *= total;

if(buff == total)
{
	printf("%s", "Password_OK_:");

}else{
	printf("%s", "Invalid_Password");

	}




} 

