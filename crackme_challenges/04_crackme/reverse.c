#include <stdio.h>
#include <string.h>



//https://courses.cs.washington.edu/courses/cse351/11au/lecture-slides/06-machineprog.pdf
//https://www.cs.uaf.edu/2011/fall/cs301/lecture/10_05_strings.html




void check(char* buffer);

int main()
{

char buffer[100];


printf("%s", "IOLI_Crackme_Level_0x04\n");
printf("%s", "Password: ");

//By default the variable itself points to the base address and therefore to access base address of string, there is no need of adding an extra ‘&’
scanf("%s", buffer);

check(buffer);

}

//need to point to the buffer
void check(char* buffer)
{
	int loop_counter = 0; 
	int int_buff;
	int total;
	

	//for loop for (cmp dword [loop_counter], eax) because it returns to this comparison 	
	//i want to pass each individual character from string stored in buffer to sscanf
	for(loop_counter; loop_counter <= strlen(buffer); loop_counter++)
	{
//		printf("%c\n", buffer[loop_counter]);
	

		//the mistake i was doing by just passing buffer printf("%s", buffer); --- i want to pass character by character 
		sscanf(buffer,"%d", &int_buff);
		total += int_buff;
		
		printf("int_buff %d\n", int_buff);
                printf("total %d\n", total);


		if(total == 0x0f)
		{
			printf("%s", "Valid Password!!");
			return;
		
		
		}

	}	
	printf("\n%s", "Password_Incorrect\n");

	//https://stackoverflow.com/questions/9003283/returning-from-a-void-function
	return;
		
}
	

