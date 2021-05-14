#include <stdio.h>
#include <string.h>
void printme(){
    printf("Success!\n");
}
int main(int argc, char* argv[]){ 
	char buf[60];
    	strcpy(buf, argv[1]);
    	printf("%s\n",buf);
    	return 0;
}
