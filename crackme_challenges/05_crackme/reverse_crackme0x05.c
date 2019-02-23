//https://stackoverflow.com/questions/15238467/get-the-first-bit-of-the-eax-register-in-x86-assembly-language
//https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/


#include <stdio.h>
#include <string.h>




void check(char* buffer);
void parell(char* buffer);

int main()
{

char buffer[100];

printf("%s\n", "IOLI_Crackme_Level_0x05");
printf("%s", "Password:");



scanf("%s", buffer);


check(buffer);

}


void check(char* buffer)
{	
//	printf("%s", buffer);
	int loop_counter = 0;
 	int int_buff;
	int total;

	//For Loop iterates through the bytes of the string, converts them to integers, and sums them together.
	for(loop_counter; loop_counter <= strlen(buffer); loop_counter++)
	{
		//printf("%c\n", buffer[loop_counter]);


		sscanf(buffer,"%d", &int_buff);
		total += int_buff;
	

		printf("total is %d when its supposed to be 16\n", total);
		if(total == 0x10)
		{	
		        //printf("the total is %d", total);
			parell(buffer);
		
		
		}
	
	}
	printf("%s", "Password_Incorrect");
}




void parell(char* buffer)
{
	int test, test2;
	
	printf("Parell function");


	sscanf(buffer, "%d\n", &test);
	

	//bitwise AND operation returns 1, if the matching bits from both the operands are 1, otherwise it returns 0
	test2 = test & 1;
	
	//TEST EAX,EAX  == if(eax == 0)
	if(test2 == 0)
	{
		printf("%s", "Password_OK");	
	
	
	}
} 

















