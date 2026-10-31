#include <stdio.h>
int main(){
    int hr, min, sec,rem;
    printf("Enter the seconds:");
    scanf("%d",&sec);
    hr=sec/3600;
    rem=sec%3600;
    min=rem/60;
    sec=rem%60;
    printf("Time in hours:%d hrs %d mins %d secs",hr, min, sec);
    return 0;
}