#include<stdio.h>
#include<math.h>
main()
{
	float cm,kg,BMI;
	printf("��J�A�������M�魫:\n");
	scanf("%f %f",&cm,&kg);
	cm=cm/100;
	
	while(cm>0&&kg>0)
	{	
	    BMI=kg/(cm*cm);
	    printf("your BMI = %.1f\n",BMI);
		if(BMI<18.5)
		{
			printf("�魫�L��\n");
		}
		else if(BMI>=18.5&&BMI<24)
		{
			printf("�魫���`\n");
		}
		else if(BMI>=24&&BMI<27)
		{
			printf("�魫�L��\n");
		}
		else if(BMI>=27&&BMI<30)
		{
			printf("���תέD\n");
		}
		else if(BMI>=30&&BMI<35)
		{
			printf("���תέD\n");
		}
		else 
		{
			printf("�h���\n");
		}
    printf("��J�A�������M�魫:\n");
	scanf("%f %f",&cm,&kg);
	cm=cm/100;
	}
}
