#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	char s[]="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	while(scanf("%c",&c)==1){
		c=tolower(c);
		if(c==' ' || c=='\n') printf("%c",c);
		else{
			c=*(strchr(s,c)-2);
			printf("%c",c);
		}
	}
}