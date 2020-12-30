#include<stdio.h>

#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<windows.h>
void loader(void);

int main()
{
    loader();
    system("cls");
    printf("\n\n Content Loaded Succesfully\n\n");




    int num1;
    printf(" Enter 1 for \nEnter 2 for collecter and pridecter\n");
    scanf("%d",&num1);
    loader();
    system("cls");
    printf("\n\n Content Uploaded Succesfully\n\n");

    if(num1==2)
    {

    float x[10],y[10],y_1[10],x4,y4;
    int n=4,i,j;
    for(i=0;i<n;i++)
    {
        printf("Enter the value of the X:--->");
        scanf("%f",&x[i]);
    }
    printf("Enter the value of the X4:--->");
    scanf("%f",&x4);
    float h;
    printf("Enter the value of the h:--->");
    scanf("%f",&h);
    loader();
    system("cls");
    printf("\n\n Content Uploaded Succesfully\n\n");

    printf("\n\n");
    for(i=0;i<n;i++)
    {
         printf("Enter the value of the y:--->");
         scanf("%f",&y[i]);
    }
    loader();
    system("cls");
    printf("\n\n Content Uploaded Succesfully\n\n");
    printf("\n******************************************************\n");
    for(i=0;i<n;i++)
    {
        for(i=0;i<n;i++)
        {


            y_1[i]=x[i]-(y[i]*y[i]);
            printf("%f\n",y_1[i]);
        }

    }

printf("\nBy Milne's Mredictor and Correcter Method------->");
printf("\n******************************************************\n");
//we know that pridecter formula
float a=(2*y_1[1] - y_1[2] + 2*y_1[3]);
float y4_predicter=y[0]+((4*h)/3)*a;
printf(" the y4 predicter :-->%f\n",y4_predicter);
//now find the y4
y4=x4*x4+y4_predicter/2;

printf("the value of the y4 is:--->%f\n",y4);

//next we have the correcter formula
float b=(y_1[2] + 4*y_1[3] + y4);
float y4_correcter=y[2] + (h/3)*b;

printf("the y4 correcter is ;--->%f\n",y4_correcter);

//now find the y4_1
float y41=x4-(y4_correcter*y4_correcter);
printf("The value of the y4' is:--->%f\n",y41);


//substituting this value of y4 again in the Correcter formula
float d=(y_1[2] + 4*y_1[3] + y41);
float y4_correcter1=y[2] + (h/3)*d;

printf("the again y4 correcter is :--->%f",y4_correcter1);
printf("\n******************************************************\n");





//by adamas-Bashforth mathod
printf("By Adams - Bashforth method is---->\n");

float e=(55*y_1[3] - 9*y_1[2] +37* y_1[1] -9*y_1[0]);
float y4_predicter_a=y[3]+((h)/24)*e;
printf("\n******************************************************\n");
printf("The value of the y4 predicter is :--->%f\n",y4_predicter_a);

//find the value of the y4'
float y4_a=x4+(y4_predicter_a*y4_predicter_a);

printf("the value of the y4' is -->%f\n",y4_a);

//find the correcter formulas value
float f=(9*y4_a+19*y_1[3]-5*y_1[2]+y_1[1]);
float y4_correcter_a=y[3]+(h/(24))*f;

printf("the value of the correcter is :-->%f\n",y4_correcter_a);

float y4_a1=x4*x4+(y4_correcter_a/2);

printf(" The value of the y4':--->%f\n",y4_a1);

//put the value of again the correcter formulas value
float g=(9*y4_a1+19*y_1[3]-5*y_1[2]+y_1[1]);
float y4_correcter_a1=y[3]+(h/(24))*g;

printf("the value of the correcter is :-->%f\n",y4_correcter_a1);
printf("\n******************************************************\n");

printf("Enter 1 for end\n");
int num;
scanf("%d",&num);
loader();
    system("cls");
    printf("\n\nExiting Succesfully\n\n");


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







