#include<stdio.h>
void main(){
    int i=-1, j=-1,k=-1, l=2, m;
    m= ((i++ && j++ && k++ ) || (l++));
    printf("i= %d\n", i);
    printf("j= %d\n", j);
    printf("k= %d\n", k);
    printf("l= %d\n", l);
    printf("m= %d\n", m);

}