//code devoplepment//

#include <stdio.h>
int main(){

int marks[12];
int j;

for(j=0;j<=11;j++)
{

printf("enter lakshmi marks");
scanf("%d"\n,&marks[j]);
}
for(j=0;j<=11;j++){
    printf("%d",marks[j]);
}
return 0;
}