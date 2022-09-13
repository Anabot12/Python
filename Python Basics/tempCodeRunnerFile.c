#include<stdio.h>
int main() \
{
   char string1[100],string2[100];
   int i=0;
   printf("Enter the String 1 : ");
   gets(string1);
   printf("enter the string 2:");
   gets(string2);

   while(string1[i]!='\0') 
   {
      printf("\nASCII Value of %c=%d", string1[i], string1[i]);
      i++;
   }
   {
    for(k=0; k < strlen(string1); kl++) 
    {
        for(j = 0; j < strlen(string2); j++) 
    {
        if(string1[k] == string2[j]) 
        {
            count++;
            string2[j] = '*';
            break;
        }
    }
}
   }
   getch(string1);
   getch(string2);
   return 0;
}