#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	double x1,x2;
	printf("For Question : a x^2+ b x+ c =0\n");
	printf("enter a b c :");
	scanf("%f %f %f",&a,&b,&c);
	if(b*b-4*a*c>=0)
  {
  x1=(-b+sqrt(b*b-4*a*c))/(2*a);
  x2=(-b-sqrt(b*b-4*a*c))/(2*a);
  printf("x1=%.1f\n",x1);
  printf("x2=%.1f\n",x2);
  }
  else
  {
  printf("no real root");	
  }
  return 0;
}
