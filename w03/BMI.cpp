#include<stdio.h>

int main(){
	double height,weight,answer;
	while(height>0 && weight>0){
		printf("Enter your height:");
		scanf("%1f",height);
		printf("Enter your weight:");
		scanf("%1f",weight);
		if(height>0 && weight>0){
			answer=weight/(height*height/10000);
			printf("Your BMI=%.21f\n",answer);
			if(answer<18.5)
				printf("您的體重過輕!\n");
			else if(18.5<=answer<24)
				printf("您的體重正常!\n");
			else if(24<=answer<27)
				printf("您的體重過重!\n");
			else if(27<=answer<30)
				printf("輕度肥胖!\n");
			else if(30<=answer<35)
				printf("中度肥胖!\n");
			else if(answer>=35)
				printf("重度肥胖!\n");
			else
				printf("輸入不合法!\n");
		
		}
		else
			printf("程式結束!\n");
	}
	return 0;
}
