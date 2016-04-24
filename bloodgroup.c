#include <stdio.h>
#include <string.h>
void main()
{ char Name[40], G[5], answer[10];
  int i;
  do
  {
    printf("What is your Name? ");
    scanf("%s", Name);
    do
    {
      printf("Enter your blood group [A, B, AB, or O]? ");
      scanf("%s", G);

      if (strcmp(G, "a") !=0  &&
                            strcmp(G, "b") !=0  &&
                            strcmp(G, "ab") !=0   &&
                            strcmp(G, "o") !=0 ) 
	// Change UPPER case blood group to lower case blood group
        printf("Blood group %s is incorrect! Please try again.\n", G);
    }  while (strcmp(G, "a") !=0  &&
                            strcmp(G, "b") !=0  &&
                            strcmp(G, "ab") !=0   &&
                            strcmp(G, "o") !=0 );
    if (strcmp(G,"a") ==0)
    {
      printf("%s, A. Hey, you can give blood to: A, AB.\n", Name);
      printf("  You can receive blood from: A, O.\n");
    }
    else if (strcmp(G, "b") ==0)
    {
      printf("%s, B. Well, you can give blood to: B, AB.\n", Name);
      printf("  You can receive blood from: B, O.\n");
    }
    else if (strcmp(G, "ab") == 0)
    {
      printf("%s, AB. Oh my God, you can give blood only to: AB.\n", Name);
      printf("  Wow, you can receive blood from all: O, A, B, AB.\n");
    }
    else
    {
      printf("%s, O. Nice! You can give blood to all: O, A, B, AB\n", Name);
      printf("  But Sad! You can receive blood only from: O\n");
    }
    printf("\nContinue (YES for Yes)? ");
    scanf("%s", answer);
  } while (strcmp(answer, "YES") == 0);
  printf("Goodbye\n");
}
