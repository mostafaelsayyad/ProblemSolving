#include <string.h>
#include <stdio.h>
int main(){


        char name[] = "oscode";

        int i = 0;

        int length = strlen(name);

 

        while(i < length)

        {

                putchar(name[i]);

                i++;

        }

 



system("pause");
return 0;
}
