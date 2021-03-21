#include<stdio.h>

int main(void){
	//Question1
	float a,b,c;
	
	printf("Please enter first value");
	scanf("%f",&a);
	
	printf("Please enter second value");
	scanf("%f",&b);
	
	printf("Please enter third value");
	scanf("%f",&c);
	
	printf("%f",(a+b)/2+3*c);
	
	return 0;

	//Question2
	
	int number;
	
	printf("Please enter a number");
	scanf("%d",&number);
	
	if(number%3==0){
	printf("number is divisible by 3",number);
	}
	else if(number%3!=0){
	printf("number is not divisible by 3",number);	
	}
	return 0;
	
	// Question3
   	float longedge,shortedge,area,circumference;
  	char ch;

   	printf("Enter a char:");
   	scanf("%c",&ch);

 	 if(ch=='a'){
    	printf("Enter long and short edge:");
    	scanf("%f %f",&longedge,&shortedge);
    	printf("%f",shortedge*longedge);
  }
    else if  (ch=='c'){
    	printf("Enter long and short edge:");
    	scanf("%f %f",&longedge,&shortedge);
   		 printf("%f",2*longedge+2*shortedge);
  }

	return 0;
	
	//Question4
	
    int xtop[5],xbottom[5],ytop[5],ybottom[5],area;
	printf("input in order:");
	scanf("%d %d %d %d",&xtop[0],&xbottom[0],&ytop[1],&ybottom[1]);
	
	area=(xtop[0]-xbottom[0])*(ytop[1]-ybottom[1]);
	
	printf("%d",area);
	
	return 0;
	
	//Question5
	
	int days, years, weeks;
    printf("Enter days: ");
    scanf("%d", &days);

    years = (days / 365);   // Ignoring leap year
    weeks = (days % 365) / 7;
    days  = days - ((years * 365) + (weeks * 7));

    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d", days);
    
    return 0;
    
    //Question6
    
    int sec, h, m, s;
	printf("Input seconds: ");
	scanf("%d", &sec);
	
	h = (sec/3600); 
	
	m = (sec -(3600*h))/60;
	
	s = (sec -(3600*h)-(m*60));
	
	printf("H:M:S - %d:%d:%d\n",h,m,s);
	
	return 0;
	
	//Question7
		
	int numbers[5];
	int j, positivectr=0, negativectr=0;
	printf("Enter 3 numbers: "); 
    scanf("%d%d%d", &numbers[0],&numbers[1],&numbers[2]);
	for(j = 0; j < 5; j++) {
		if(numbers[j] > 0)
		{
			
			positivectr++;
		}
		else if(numbers[j] < 0)
		{
			negativectr++;
		}
	}
	printf("Number of positive values: %d\n", positivectr);
	printf("Number of negative values: %d", negativectr);
	
    return 0;

	//Question8
	
	int CostPrice;
	int SellingPrice;
	int profitamount;
	int lossamount;

	printf("Enter cost price:");
	scanf("%d",&CostPrice);

    printf("Enter selling price:");
    scanf("%d",&SellingPrice);

    profitamount=SellingPrice-CostPrice;
    printf("You can booked your profit amount:%d\n",profitamount);
	
	lossamount=CostPrice-SellingPrice;
	printf("You got a loss of amount:%d",lossamount);
	
	return 0;
	
	//Question9
	
	int number;
	
	printf("Enter any number:");
	scanf("%d",&number);
	
	if(number%2==0){
		printf("The number is even");
		scanf("%d",&number);	
		}
		else{
		printf("The number is odd");
		scanf("%d",&number);
		}
		
		return 0;
	
	//Question10
	
	int sides[5];
	printf("Input three sides:");
	scanf("%d %d %d",&sides[0],&sides[1],&sides[2]);
	
	if(sides[0]==sides[1]||sides[0]==sides[2]||sides[1]==sides[2]){
		printf("This is an isosceles triangle");
	}
	
	else{
		printf("This is not an isosceles triangle");
	}	
	return 0;
}

	
