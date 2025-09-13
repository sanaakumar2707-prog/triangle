#include <stdio.h>
int main(int argc, const char * argv[]) {
    int s1,s2,s3;
    printf("enter the valus of the sides =");
    scanf("%d %d %d",&s1,&s2,&s3);
    if ((s1==s2)  && (s2==s3) && (s3=s1)){
        printf("equilateral traingle");
    }
   else if ((s1==s2 || s1==s3 || s2==s3) && s1!=s2 != s3 ){
        printf("isosceles triangle ");
    }
    else
        printf("scalene triangle");
    return 0;
}
