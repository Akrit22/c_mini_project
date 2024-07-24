
#include<stdio.h>
#include<math.h>
int main(){
	home:
    printf("\t\t\t\t\t1. ADDITION OF TWO NUMBERS\n");
    printf("\t\t\t\t\t2. MULTIPLICATION OF TWO NUMBERS\n");
    printf("\t\t\t\t\t3. TO CALCULATE SIMPLE INTEREST\n");
    printf("\t\t\t\t\t4. QUADRATIC EQUATION CALCULATOR(finding roots of equation)\n"); 
    printf("\t\t\t\t\t5.  SUBTRACT OF TWO NUMBERS\n");
    printf("\t\t\t\t\t6.  SQUARE OF A NUMBER\n");
    printf("\t\t\t\t\t7.  SQUARE ROOT OF A NUMBER\n");
    printf("\t\t\t\t\t8.  DIVISION OF TWO NUMBERS\n");
    printf("\t\t\t\t\t9.  EXIT\n");
    system("color c");
    int S_no ;
    int a,b,c;
    int p,n;
    float pi,r;
    float rr,r1,r2,d;
    printf("enter the s_no u want to do: \n");
    scanf("%d",&S_no);
    switch(S_no)
    {
    case 1:
    printf("\n");
    printf("     ADDITION OF TWO NUMBERS\n");
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("enter the value of b \n");
    scanf("%d",&b);
    printf("sum of a and b is %d",a+b);
    printf("\n");
    printf("***********************************************************************\n");
    printf("***********************************************************************\n");
    	goto home;
   
    
        break;

    case 2:

    printf("       MULTIPLICATION OF TWO NUMBERS\n");
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("enter the value of b \n");
    scanf("%d",&b);
    printf("answer is %d",a*b);
        printf("\n");
        printf("***********************************************************************\n");
    printf("***********************************************************************\n");
        	goto home;
 
      break;

    case 3:

    printf("       TO CALCULATE SIMPLE INTEREST\n");  
    printf("enter the principal amt.   ");
    scanf("%d",&p);
    printf("enter the no. of years   ");
    scanf("%d",&n);
    printf("enter rate of interest    ");
    scanf("%f",&r);
    printf(" simple interest is %f",p*n*r/100);
        printf("\n");
        printf("***********************************************************************\n");
    printf("***********************************************************************\n");
        	goto home;

break;

    case 4:

     printf("       QUADRATIC EQUATION CALCULATOR(finding roots of equation)\n"); 

        printf("enter the value of cofficient a,b and c : \n ");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    printf("Value of d:%f \n",d);
    if(d<0){
        printf("roots are not real");
    }
    else if(d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf(" first root:%f \n",r1); 
        printf(" second root:%f ",r2);       
    }
    else if(d==0){
        rr=-b/(2*a);
        printf("roots are equal");
        printf("root1=root2: %f",rr);
    }
    else{
        printf("invalid data");
    }
        printf("\n");
        printf("***********************************************************************\n");
    printf("***********************************************************************\n");
        	goto home;

    
    break;
    case 5:

    printf("       SUBTRACT OF TWO NUMBERS\n");
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("enter the value of b \n");
    scanf("%d",&b);
    printf("answer is %d",a-b);
        printf("\n");
        printf("***********************************************************************\n");
    printf("***********************************************************************\n");
        	goto home;
 
      break;
    
    case 6:

    printf("       SQUARE OF A NUMBER\n");
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("answer is %d",a*a);
        printf("\n");
        printf("***********************************************************************\n");
    printf("***********************************************************************\n");
        	goto home;
 
      break;
    case 7:

    printf("       SQUARE ROOT OF A NUMBER\n");
    printf("enter the value of a \n");
    scanf("%d",&a);
    a=sqrt(a);
    printf("answer is %d",a);
        printf("\n");
        printf("***********************************************************************\n");
    printf("***********************************************************************\n");
        	goto home;
 
      break;
      
    case 8: 
	printf("       DIVISION OF TWO NUMBERS\n");
    printf("enter the value of a \n");
    scanf("%d",&a);
    printf("enter the value of b \n");
    scanf("%d",&b);
    printf("answer is %d",a/b);
        printf("\n");
        printf("***********************************************************************\n");
    printf("***********************************************************************\n");
        	goto home;
 
      break;
    case 9:
    	printf("\t\t\t\t\t\texiting....");
    	return 1;
    	break;

    
    default: printf("invalid S_no");
    printf("***********************************************************************\n");
    printf("***********************************************************************\n");
    	goto home;
    break;
}
 
return 0;
}
