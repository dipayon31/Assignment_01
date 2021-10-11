// 2012082

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_char(char ch){
    return ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'));
}

bool is_valid(char email[], int n){
    if(!is_char(email[0])){
        return 0;
    }
    int at_idx = -1, dot_idx = -1;
    for(int i=0; i<n; i++){
        if(email[i]=='@')
            at_idx = i;
        else if(email[i]=='.')
            dot_idx = i;
    }

    if(at_idx==-1 || dot_idx==-1)
        return 0;
    if(at_idx>dot_idx)
        return 0;
    if(dot_idx==(n-1))
        return 0;
}

int main(){
    char email[100];
    scanf("%s", email);
    int n = strlen(email);
    bool flag = is_valid(email,n);

    if(flag){
        printf("valid\n");
    }
    else{
        printf("not valid\n");
    }
    return 0;
}

