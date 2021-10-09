#include <stdio.h>
#include<string.h>
int small(char a){
    if ((int)a>=97 && (int)a<=122){
            a=(char)((int)a-32);
        }
    return a;


}


int main() {
	char str[100];
	scanf("%[^\n]s",str);
	printf("%s\n",str);
    for(int i=0;i<100;i++){
        
        str[i]=small(str[i]);
        
    }
    printf("%s\n",str); 
	return 0;
}
