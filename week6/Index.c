#include <stdio.h>
int main(){
    int M[] = {2, 20, 8, 10, 4, 6, 16, 18};
    int N[] = {1, 3, 9, 7, 11, 15, 19};
    char ans;
    int d,indx;
    while (1){
        scanf("%d", &d);
        if(d >=1 && d <= 20){
            break;
        }
    }
    for (int i = 0; i < 8; i++){
        if(M[i] == d){
            ans = 'M';
            indx = i;
        }
    }
    for (int i = 0; i < 7; i++){
        if(N[i] == d){
            ans = 'N';
            indx = i;
        }
    }
    if (ans == 'M'){
        printf("%d is in M at index [%d]", d, indx);
    }
    else if (ans == 'N'){
        printf("%d is in N at index [%d]", d, indx);
    }
    else{
        printf("%d is not in neither M nor N", d);
    }
    return 0;
}