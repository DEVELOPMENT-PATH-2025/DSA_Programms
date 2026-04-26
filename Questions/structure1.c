/*Create a structure specification related to the band's scores by a student appearing for IELTS tests thrice with the following members –

char reg_no[15] ;

float bnd1,bnd2,bnd3 ;

read the values and pass the structure to a function that calculates and returns the average band score.*/
#include <stdio.h>
#include <stdlib.h>

struct IELTStest{
    char reg_no[15];
    float bnd1,bnd2,bnd3 ;
} svar;

float avg(struct IELTStest svar){
    float avg;
    avg = (svar.bnd1+svar.bnd2+svar.bnd3)/3;
    return avg;
}

int main(){
    printf("\nEnter registration number: ");
    gets(svar.reg_no);
    printf("\nEnter band scores: ");
    scanf("%d%d%d",svar.bnd1,svar.bnd2,svar.bnd3);
    float aver = avg(svar);
    printf("%d",aver);
    return 0;
}