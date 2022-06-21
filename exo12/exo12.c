#include <stdio.h>
int main()
{
   FILE *s,*t;
   char c;
   s = fopen("source.txt", "r");
   t = fopen("target.txt", "w");
   while(1){
     c = fgetc(s);

     if(c == EOF)
     {
       break;
     }
     else
     {
       fputc(c,t);
     }
   }

   fclose(s);
   fclose(t);
   return 0;
}