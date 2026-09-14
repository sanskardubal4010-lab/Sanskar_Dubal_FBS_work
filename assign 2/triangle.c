#include <stdio.h>
void main()
{
    int s1,s2,s3;
    printf("enter the lengths of s1 sides of triangle=");
    scanf("%d",&s1);
    printf("enter the lengths of s2 sides of triangle=");
    scanf("%d",&s2);
    printf("enter the lengths of s3 sides of triangle=");
    scanf("%d",&s3);


    if(s1==s2&&s2==s3)
    {
        printf("triangle is equilateral");
    }
    else if(s1==s2||s2==s3||s1==s3)
      {
        printf("triangle is isoscales");
      }
      else{
      printf("triangle is scalen triangle");
      }

}