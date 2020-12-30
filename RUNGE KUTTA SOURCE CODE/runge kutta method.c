#include<stdio.h>
#include<math.h>


float function(float x,float y)
{
	return x+y;
}

float rungeKutta(float x0, float y0, float x, float h)
{

    int n,i;
    float k1,k2,k3,k4,y;

	n = (int)((x - x0) / h);

	k1, k2, k3, k4;


	y = y0;
	for (i=1; i<=n; i++)
	{

	    printf("The give stage is ----->%d\n",i);
        printf("**********************************************\n");
		k1 = h*function(x0, y);
		printf("The value of the k1 is------>%f\n",k1);
		k2 = h*function(x0 + 0.5*h, y + 0.5*k1);
		printf("The value of the k1 is------>%f\n",k2);
		k3 = h*function(x0 + 0.5*h, y + 0.5*k2);
		printf("The value of the k1 is------>%f\n",k3);
		k4 = h*function(x0 + h, y + k3);
		printf("The value of the k1 is------>%f\n",k4);
        printf("**********************************************\n");
		y = y + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);
        printf("\n\n******************************************\n");
        printf("The value of the f(x) is----->%f\n",y);
        printf("**********************************************\n");



		x0 = x0 + h;
	}


	return (y);
}




int main()
{
	float x0,y ,x,h;

	printf("Enter the value of the x0---->");
	scanf("%f",&x0);
	printf("Enter the value of the y---->");
	scanf("%f",&y);
	printf("Enter the value of the x---->");
	scanf("%f",&x);
	printf("Enter the value of the h---->");
	scanf("%f",&h);
    printf("\n\n******************************************\n\n");
	printf("Final ANS is : %f\n",rungeKutta(x0, y, x, h));
    printf("**********************************************\n");

	return 0;
}



