#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t>0){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a+b==c)
    printf("+\n");
    else 
    printf("-\n");
    t--;
    }
    
    return 0;
}