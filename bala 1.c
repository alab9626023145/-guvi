#include <stdio.h>
int main(void)
{
	char ch;
	scanf("%c",&ch );
	if(ch>='a'&&ch<='z')
	{
		if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
		printf("Consonant");
		else
		printf("vowel");
		}
}
