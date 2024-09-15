
#include<stdio.h>

int main()
{  /*label:
   printf("we arfe inside tyhe label\n");

   goto end;
      printf("Hello World\n");
      goto label;
      end:

   printf("we are at the end");
    return 0;*/
       int num;
    for (int i = 0; i <8; i++)
    {
        /* code */ printf("%d\n" ,i);
        for (int j = 0; j < 8; j++)
        {
            /* code */printf("Enter thye number .Enter 0 to exit\n");
            scanf("%d", &num);
            if (num==0)
            {
                //break;
                /* code */
                goto end;
            }
            

        }
        

    }  end:
    return 0;
    
}
