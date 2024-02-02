
#include <stdio.h>
#include <stdlib.h>
int zarAt(){

return rand()%6+1;
}
int main()
{
    int frekans[6]={0};
    fonk(frekans);
    return 0;
}

void fonk(int d[]){
int i;
for(i=0; i<5;i++){

    swtich(zarAt());
    {

    case 1: d[0]++ ;break;
    case 2: d[1]++ ;break;
    case 3: d[2]++ ;break;
    case 4: d[3]++ ;break;
    case 5: d[4]++ ;break;
    case 6: d[5]++ ;break;
    }

}
for(i=0;i<6;i++){
    if(d[i]==0)
     continue;

  printf("\n%d sayısından %d kadar gelmistir",i,d[i]);

}


}
