#include <stdio.h>
struct Mysamplestructure
{
 int a;
 char c;
 char name[10];
 char Examplevalue;
 long d;
 float f;
};
int main()
{
    struct Mysamplestructure s1,s2,s3,a1;
    s1.c='A';
    printf("The letter is:%c",s1.c);

    s2.a=20;
    s3.a=15;
    a1.a=s2.a+s3.a;
    printf("\nAdded value is:%d",a1.a);

    s2.a=50;
    s3.a=100;
    a1.a=s2.a-s3.a;
    printf("\nSubtracted value is:%d",a1.a);


    strcpy(s1.name,"Lavanya");
    printf("\nMy Name is:%s",s1.name);


    s2.a=200;
    s3.a=100;
    a1.a=s2.a * s3.a;
    printf("\nMultiplied value is:%d",a1.a);
    return 0;
}
