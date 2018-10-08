#include<stdio.h>
#include<math.h>
main()
{
	float cm,kg,BMI;
	printf("輸入你的身高和體重:\n");
	scanf("%f %f",&cm,&kg);
	cm=cm/100;
	
	while(cm>0&&kg>0)
	{	
	    BMI=kg/(cm*cm);
	    printf("your BMI = %.1f\n",BMI);
		if(BMI<18.5)
		{
			printf("體重過輕\n");
		}
		else if(BMI>=18.5&&BMI<24)
		{
			printf("體重正常\n");
		}
		else if(BMI>=24&&BMI<27)
		{
			printf("體重過重\n");
		}
		else if(BMI>=27&&BMI<30)
		{
			printf("輕度肥胖\n");
		}
		else if(BMI>=30&&BMI<35)
		{
			printf("中度肥胖\n");
		}
		else 
		{
			printf("去減肥\n");
		}
    printf("輸入你的身高和體重:\n");
	scanf("%f %f",&cm,&kg);
	cm=cm/100;
	}
}
