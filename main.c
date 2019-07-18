#include <stdio.h>
#include <stdlib.h>

int main()
{

   int a,b;
    printf("Please enter year,month:");
    scanf("%d,%d",&a,&b);
    if ((a%4==0&&a%100!=0)||a%400==0)
     printf("%d is leap year\n",a);
    else
    printf("%d is not leap year\n",a);
    if (b>=3&&b<=5)
     printf("The season is spring\n");
    if(b>=6&&b<=8)
     printf("The season is summer\n");
    if(b>=9&&b<=11)
     printf("The season is autumn\n");
    if((b>=1&&b<=2)||b==12)
     printf("The season is winter\n");
     switch (b)
    {
      case 1:
          printf("The number of days of this month is 31\n");
          break;
      case 2:
         {
          if (a%4==0&&a%100!=0||a%400==0)
          printf("The number of days of this month is 29\n");
          else
          printf("The number of days of this month is 28\n");
          break;
         }
      case 3:
          printf("The number of days of this month is 31\n");
          break;
      case 4:
          printf("The number of days of this month is 30\n");
          break;
      case 5:
          printf("The number of days of this month is 31\n");
          break;
      case 6:
          printf("The number of days of this month is 30\n");
          break;
      case 7:
          printf("The number of days of this month is 31\n");
          break;
      case 8:
          printf("The number of days of this month is 31\n");
          break;
      case 9:
          printf("The number of days of this month is 30\n");
          break;
      case 10:
          printf("The number of days of this month is 31\n");
          break;
      case 11:
          printf("The number of days of this month is 30\n");
          break;
      case 12:
          printf("The number of days of this month is 31\n");
          break;
      default:printf("Input error!\n");


    }
    return 0;
}
