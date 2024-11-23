# include <stdio.h>
# include <conio.h>

int main(){
    int x1,x2,x3,y1,y2,y3, m, n;
    printf("Give me x1: ");
    scanf("%d",&x1);
    printf("Give me x2: ");
    scanf("%d",&x2);
    printf("Give me x3: ");
    scanf("%d",&x3);
    printf("Give me y1: ");
    scanf("%d",&y1);
    printf("Give me y2: ");
    scanf("%d",&y2);
    printf("Give me y3: ");
    scanf("%d",&y3);
    m = (y2 - y1)/(x2 - x1) ;
    n = (y3 - y2)/(x3 - x2);
    if ( m == n){
        printf("The points are colinear");}
    else{
        printf("The points are not colinear");
    }
    
return 0;

}

