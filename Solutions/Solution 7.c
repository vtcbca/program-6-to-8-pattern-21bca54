#include<stdio.h>

int main()

{

    int n,m;


    printf("Enter the number of rows:");


    scanf("%d",&n);


    m=n;


    for(int i=n; i>0; i--)

    {


        for(int j=1; j<=m+1; j++)

        {


            printf(" ");



        }

        for(int k=1; k<=2*i-1; k++)

        {


            printf("*");


        }
        printf("\n");
        m++;
        

       
    }













return 0;


}

