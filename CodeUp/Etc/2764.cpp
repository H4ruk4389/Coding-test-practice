#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
char str[101];
char re_str[101];
int main() {
    int i,j=0;
    scanf("%s",str);
    
    for(i=0;i<strlen(str)*2+1;i++) {
        if(i % 2 == 0) re_str[i] = '|';
        else if(i % 2 != 0) {
            re_str[i] = str[j];
            j++;
        }
        
    }
    for(i=0;i<strlen(str)*2+1;i++) {
        if(i%2 == 0) printf("+");
        else if(i%2 != 0) printf("-");
    }
    printf("\n");
    printf("%s\n",re_str);
        for(i=0;i<strlen(str)*2+1;i++) {
        if(i%2 == 0) printf("+");
        else if(i%2 != 0) printf("-");
    }

    return 0;
}
