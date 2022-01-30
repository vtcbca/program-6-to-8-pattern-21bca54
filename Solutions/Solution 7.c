#include<stdio.h>
#include<conio.h>

Void main()

{

    int n,m,i,j,k;


    printf("Enter the number of rows:");


    scanf("%d",&n);


    m=n;


    for( i=n; i>0; i--)

    {


        for( j=1; j<=m+1; j++)

        {


            printf(" ");



        }

        for( k=1; k<=2*i-1; k++)

        {


            printf("*");


        }
        printf("\n");
        m++;
        

       
    }

getch();


}

