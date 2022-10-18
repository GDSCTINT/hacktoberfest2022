#include<stdio.h>
#include<string.h>

void main(){
	char str[50];
	printf("Enter the string :\n");
	scanf("%s",str);

	for(int i=0;str[i]!='\0';i++){
		if(str[i]>='a' && str[i]<='z'){
			str[i]=str[i]-32;
		}
	}
	printf("\n string is in uppercase : %s\n",str);

	int len=strlen(str),f=0;
	for(int i=0;i<len;i++){
		if(str[i]!=str[len-i-1]){
			f=1;
			break;
		}
	}
	if(f==0){
		printf("\n %s is a palindrom string\n",str);
	}
	else{
		printf("\n %s is not a palindrome string\n",str);
	}
}