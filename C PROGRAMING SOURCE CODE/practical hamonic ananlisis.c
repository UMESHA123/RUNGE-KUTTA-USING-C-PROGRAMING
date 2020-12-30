#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<windows.h>
#include<graphics.h>
#include<conio.h>
void loader(void);

int main()
{



    loader();
    system("cls");
    printf("\n\n Content Loaded Succesfully\n\n");




    int num_x,sum,i,j,number;
    float x_value[20],y_value[20],cos_x_value[20],y_cos_x_value[20],sum_y_cos_x_value=0,sum_y_value=0,x_value_radian,sin_x_value[20];
    float sum_y_sin_x_value=0,a,a1,b1,a2,b2,a3,b3,a4,b4,number_harmonics,f_x,y_sin_x_value[20],sin_x,cos_x,cos_2_x_value[20],sin_2_x_value[20];
    float y_cos_2_x_value[20],y_sin_2_x_value[20],sum_y_sin_2_x_value=0,sum_y_cos_2_x_value=0,sum_y_cos_3_x_value=0,sum_y_sin_3_x_value=0;
    float y_cos_3_x_value[20],y_sin_3_x_value[20],cos_3_x_value[20],sin_3_x_value[20];
    printf("Enter the number of elements in x\n");
    scanf("%d",&num_x);
    printf("Enter the values of the x\n");

    for(i=0;i<num_x;i++)
    {
        scanf("%f",&x_value[i]);
        x_value_radian=x_value[i]*(3.14/180);
        cos_x_value[i]=cos(x_value_radian);
        cos_2_x_value[i]=cos(2*x_value_radian);
        cos_3_x_value[i]=cos(3*x_value_radian);

        sin_x_value[i]=sin(x_value_radian);
        sin_2_x_value[i]=sin(2*x_value_radian);
        sin_3_x_value[i]=sin(3*x_value_radian);

    }
    loader();
    system("cls");
    printf("\n\n Content Uploaded Successfully\n\n");


    printf("Enter the value of the y\n");
    for(i=0;i<num_x;i++)
    {

        scanf("%f",&y_value[i]);
        y_cos_x_value[i]=y_value[i]*cos_x_value[i];
        y_cos_2_x_value[i]=y_value[i]*cos_2_x_value[i];
        y_cos_3_x_value[i]=y_value[i]*cos_3_x_value[i];

        y_sin_x_value[i]=y_value[i]*sin_x_value[i];
        y_sin_2_x_value[i]=y_value[i]*sin_2_x_value[i];
        y_sin_3_x_value[i]=y_value[i]*sin_3_x_value[i];

        sum_y_value=sum_y_value+y_value[i];

        sum_y_cos_x_value=sum_y_cos_x_value+y_cos_x_value[i];
        sum_y_cos_2_x_value=sum_y_cos_2_x_value+y_cos_2_x_value[i];
        sum_y_cos_3_x_value=sum_y_cos_3_x_value+y_cos_3_x_value[i];

        sum_y_sin_x_value=sum_y_sin_x_value+y_sin_x_value[i];
        sum_y_sin_2_x_value=sum_y_sin_2_x_value+y_sin_2_x_value[i];
        sum_y_sin_3_x_value=sum_y_sin_3_x_value+y_sin_3_x_value[i];

    }
    loader();
    system("cls");
    printf("\n\n  Content Uploaded Successfully\n\n");

    printf("The sum of ycosx is %f\n",sum_y_cos_x_value);
    printf("The sum of ycos(2x) is %f\n",sum_y_cos_2_x_value);
    printf("The sum of ycos(3x) is %f\n",sum_y_cos_3_x_value);

    printf("The sum of ysinx is %f\n",sum_y_sin_x_value);
    printf("The sum of ysin(2x) is %f\n",sum_y_sin_2_x_value);
    printf("The sum of ysin(3x) is %f\n",sum_y_sin_3_x_value);

    printf("Enter the number of Harmonic to be find\n");
    scanf("%f",&number_harmonics);
    if(number_harmonics==1)
    {
        printf("====================================================\n");
        a=(((2)*sum_y_value)/num_x)/2;
        printf(" a is %f\n",a);
        a1=((2)*sum_y_cos_x_value)/num_x;
        printf(" a1 is %f\n",a1);
        b1=((2)*sum_y_sin_x_value)/num_x;
        printf("b1 is %f\n",b1);
        printf("====================================================\n");
        printf("\n\n");
        printf("====================================================\n");
        printf("The forier series of y up to first harmonics is\n");
        printf("y(x)= %f +( %f cos(x)\t %f sin(x))",a,a1,b1);
        printf("\n===================================================\n");

        printf("If you want the table Press 1 other wise 2\n");
        scanf("%d",&number);

        if(number==1)
        {
            printf("=======================================================\n");
            printf("cos(x)\t\tycos(x)\t\tsin(x)\t\tysin(x)\n");
            for(i=0;i<num_x;i++)
            {
                printf("%f\t%f\t%f\t%f\n",cos_x_value[i],y_cos_x_value[i],sin_x_value[i],y_sin_x_value[i]);
            }
            printf("=========================================================\n");
        }

        int number_for_exit;
        printf("Enter 1 for exit:-->");
        scanf("%d",&number_for_exit);


    }

    if(number_harmonics==2)
    {
        printf("====================================================\n");
        a=(((2)*sum_y_value)/num_x)/2;
        printf(" a is %f\n",a);

        a1=((2)*sum_y_cos_x_value)/num_x;
        printf(" a1 is %f\n",a1);

        a2=((2)*sum_y_cos_2_x_value)/num_x;
        printf(" a2 is %f\n",a2);

        b1=((2)*sum_y_sin_x_value)/num_x;
        printf(" b1 is %f\n",b1);

        b2=((2)*sum_y_sin_2_x_value)/num_x;
        printf(" b2 is %f\n",b2);
        printf("=======================================================================================\n");


        printf("The forier series of y up to second harmonics is\n");
        printf("y(x)= %f +( %f cos(x)\t %f sin(x)) + (%f cos(2)\t %f sin(2x))\n",a,a1,b1,a2,b2);
        printf("=======================================================================================\n");

        printf("If you want the table Press 1 other wise 2\n");
        scanf("%d",&number);


        if(number==1)
        {
            printf("============================================================================================================================================\n");

            printf("cos(x)\t\tcos(2x)\t\tycos(x)\t\tycos(2x)\tsin(x)\t\tsin(2x)\t\tysin(x)\t\tysin(2x)\n");
            for(i=0;i<num_x;i++)
            {
                printf("%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t\n",cos_x_value[i],cos_2_x_value[i],y_cos_x_value[i],y_cos_2_x_value[i],sin_x_value[i],sin_2_x_value[i],y_sin_x_value[i],y_sin_2_x_value[i]);

            }
            printf("==========================================================================================================================================\n");
        }
        int number_for_exit;
        printf("Enter 1 for exit:-->");
        scanf("%d",&number_for_exit);

    }

    if(number_harmonics==3)
    {
         printf("====================================================\n");
        a=(((2)*sum_y_value)/num_x)/2;
        printf(" a is %f\n",a);

        a1=((2)*sum_y_cos_x_value)/num_x;
        printf(" a1 is %f\n",a1);

        a2=((2)*sum_y_cos_2_x_value)/num_x;
        printf(" a2 is %f\n",a2);

        a3=((2)*sum_y_cos_3_x_value)/num_x;
        printf("a3 is %f\n",a3);

        b1=((2)*sum_y_sin_x_value)/num_x;
        printf(" b1 is %f\n",b1);

        b2=((2)*sum_y_sin_2_x_value)/num_x;
        printf(" b2 is %f\n",b2);

        b3=((2)*sum_y_sin_3_x_value)/num_x;
        printf("b3 is %f\n",b3);
        printf("=============================================================================================================\n");


        printf("The forier series of y up to second harmonics is\n");
        printf("y(x)= %f +( %f cos(x)\t %f sin(x)) + (%f cos(2)\t %f sin(2x)) +( %f cos(3x) \t %f sin(3x))\n",a,a1,b1,a2,b2,a3,b3);
        printf("=============================================================================================================\n");

           printf("If you want the table Press 1 other wise 2\n");
        scanf("%d",&number);

        if(number==1)
        {
            printf("=================================================================================================================================\n");

            printf("cos(x)\t\tcos(2x)\t\tcos(3x)\t\tycos(x)\t\tycos(2x)\t\tycos(3x)\tsin(x)\t\tsin(2x)\t\tsin(3x)\t\tysin(x)\tysin(2x)\t\tysin(3x)\n");
            for(i=0;i<num_x;i++)
            {
                printf("%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t%f\t\n",cos_x_value[i],cos_2_x_value[i],cos_3_x_value[i],y_cos_x_value[i],y_cos_2_x_value[i],y_cos_3_x_value[i],sin_x_value[i],sin_2_x_value[i],sin_3_x_value[i],y_sin_x_value[i],y_sin_2_x_value[i],y_sin_3_x_value[i]);

            }
            printf("================================================================================================================================\n");
        }
        int number_for_exit,number123;

        printf("Enter the 2 to show a photo:");
        scanf("%d",&number123);
        if (number123==2)
        {
             initwindow(688,388,"PRACTICAL HARMONIC ANALISIS");
             readimagefile("walck.jpg",0,0,688,388);
             getche();
        }
        printf("Enter 1 for exit:-->");
        scanf("%d",&number_for_exit);



    }


}



void loader()
{
int i;
system("cls");
printf("\n\nPlease Wait Loading.......");
for(i=0;i<50;i++)
{

    Sleep(30);
    printf("%c",219);
}

}

