#include <stdio.h>

int main(){
    float bank,wallet;
    int lock = 0 ;
    scanf("%f %f", &bank, &wallet);
    while(lock != 3){
        float statement = 0.0;
        char do_what;
        scanf(" %c", &do_what);
        if (do_what == 'D'){
            scanf("%f", &statement);
            if (wallet >= statement){
                wallet -= statement;
                bank += statement;
                lock = 0;
            }
            else{
                lock++;
            }
        }
        if (do_what == 'W'){
            scanf("%f", &statement);
            if (bank >= statement){
                bank -= statement;
                wallet += statement;
                lock = 0;
            }
            else{
                lock++;
            }
        }
        if (do_what == 'E'){
            char c;
            scanf(" %c", &c);
            lock = 3;
        }
    }
    printf("%.2f\n%.2f", bank,wallet);
    return 0;
}