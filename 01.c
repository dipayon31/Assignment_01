// 2012082

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int main(){
    char *ch = (char *)malloc(100*sizeof(char));
    scanf("%s", ch);
    bool flag = 0;

    for(int i=0; i<strlen(ch); i++){
        if(ch[i]=='.'){
            flag = 1;
            break;
        }
    }

    if(flag==0){
        printf("not valid\n");
    }
    else if(flag==1){
        printf("valid\n");
    }
    free(ch);
    return 0;
}