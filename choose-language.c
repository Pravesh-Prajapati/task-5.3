#include<stdio.h>
void main()
{
	int choice1,echoice,hchoice,gchoice;
	printf("press 1 for english\n");
	printf("press 2 for hindi\n");
	printf("press 3 for Gujarati\n");
	
	printf("enter your choice =");
	scanf("%d",&choice1);
	
	switch(choice1){
		case 1:
			printf("press 1 for internet recharge\n");
			printf("press 2 for topup recharge\n");
			printf("press 3 for special recharge\n");
			printf("enter your choice = ");
			scanf("%d" , &echoice);
			switch (echoice){
				case 1:
						printf("you have successfuly done internet recharge");
						break;
				case 2:
						printf("you have successfuly done top recharge");
						break;
				case 3:
						printf("you have successfuly done special recharge");
						break;
				default:
						printf("plz enter a valid choice");
			}
			break;
		case 2:
				printf("internet recharge ke liye 1 dabaye\n");
			printf("top up recharge ke liye 2 dabaye\n");
			printf("special recharge ke liye 3 dabaye\n");
			printf("enter your choice = ");
			scanf("%d" , &hchoice);
			switch (hchoice){
				case 1:
						printf("apne safalta purvak internet recharge kar liya hai");
						break;
				case 2:
						printf("apne saflta purvak top up recharge kar liya hai");
						break;
				case 3:
						printf("apne safalta purvak special recharge kar liya hai");
						break;
				default:
						printf("plz enter a valid choice");
			};
			break;
		
		
		case 3:
				printf("internet recharge mate 1 dabavo\n");
			printf("top up recharge mate 2 dabavo\n");
			printf("special recharge mate 3 dabavo\n");
			printf("enter your choice = ");
			scanf("%d" , &gchoice);
			switch (gchoice){
				case 1:
						printf("tame safaltapurvak internet recharge karyu che");
						break;
				case 2:
						printf("tame safaltapurvak top up recharge karyu che");
						break;
				case 3:
						printf("tame safaltapurvak special recharge karyu che");
						break;
				default:
						printf("plz enter a valid choice");
			}
			
	
	}
}













