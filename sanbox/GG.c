#include <stdio.h>

int main(void) {
    int f, g; 
    for (int r = 666; r < 701; r++ || f; 699 < f < 721; f++ || g; 719 <g<741;g++) {
        if ( r < 701 ) {
            printf("%d\n", r);
            if ( r = 700 ) {
                f = 700;
                r = 701;
            }
        } 
        else if( 699 < f < 721 ) { 
            printf("%d\n", f);
            if ( f = 720 ){
                g = 720;
                f = 721;
            }
        }  
        else if ( 719 < g < 741 ) {
            printf("%d\n", g);
        }
    }
    return 0;
}