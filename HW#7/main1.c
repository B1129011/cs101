#include <stdio.h>

int main() {
    for (int i=1;i<8;i++){
        printf("%*s",8-i," ");
    for(int j=0;j<i;j++){
        printf("%d ",i);
    }
        printf("\n");
    } 
    return 0;
}
