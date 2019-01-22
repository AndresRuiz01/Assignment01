j/**
 * Author: Andres Ruiz
 * Date: 2019/01/18
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {

  int userNum;
  int numRemainder;
  char evenOdd[50];
  char posNeg[50];

  numRemainder = userNum % 2;

  printf("Enter an integer:\n");
  scanf("%d", &userNum); // Scaning imput number

  numRemainder = userNum % 2;

  if (numRemainder == 0){
      strcpy(evenOdd, "Even"); // Output for even number
  }
  else{
      strcpy(evenOdd, "Odd"); // Output for odd number
  }

  if (userNum > 0){
      strcpy(posNeg, "Positive"); // Output for postive number
  }
  else if (userNum < 0){
      strcpy(posNeg, "Negative"); // Output for negative number
  }
  else {
      strcpy(posNeg, "Neutral"); // Output for 0
  }

  printf("%d is %s and %s!", userNum, posNeg, evenOdd);
  
  return 0;
}
