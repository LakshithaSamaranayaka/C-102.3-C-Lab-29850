#include <stdio.h>
#include <stdlib.h>

int main(){
  int month;

        printf("Enter the month number (1-12): ");
        scanf("%d", &month);

  switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:

      printf("There are 31 days in this month.\n");

      break;

    case 2:

      printf("There are 28 days in this month.\n");
      break;

    case 4:
    case 6:
    case 9:
    case 11:

      printf("There are 30 days in this month.\n");
      break;

    default:

      printf("Invalid month number.\n");

      break;
  }

  return 0;
}

