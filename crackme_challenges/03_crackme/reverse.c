#include <stdio.h>
#include <string.h>


void test(int buff, int sum);
void shift(char* string);

int main()
{

	int buff; 
	int sum;

	printf("%s", "IOLI_Crackme_Level_0x03\n");
	printf("%s", "Password: ");

	scanf("%d", &buff);

	int num1 = 0x5a;
	int num2 = 0x1ec;

	sum = num1 + num2;
	sum *= sum;


	test(buff, sum);

}


void test(int buff, int sum)
{
	
	if(buff == sum)
	{	 
	
		//char *s = "Lqydolg_Sdvvzrug";function(s);  == function("MyString");
		//The reason why the shift function parameter and prototype needs to be a char*
		shift("Sdvvzrug#RN$$$#=");
	}else{
		shift("Lqydolg_Sdvvzrug");
	}
}

void shift(char* string)
{
//http://www.c4learn.com/c-programming/c-arithmetic-operations-on-character/
//https://www.programiz.com/c-programming/c-operators
// print(''.join([chr(ord(i)-0x3) for i in 'Sdvvzrug#RN$$$#=']))  -->  Password OK!!! :
// print([chr(ord(i)-0x3) for i in 'Sdvvzrug#RN$$$#=']) --> ['P', 'a', 's', 's', 'w', 'o', 'r', 'd', ' ', 'O', 'K', '!', '!', '!', ' ', ':']
//



	int counter = 0;
	
	for(counter; counter < strlen(string); counter++){

		printf("%c", (string[counter] - 3));
	
	} 
	  
		
}












