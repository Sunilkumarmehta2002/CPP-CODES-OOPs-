//#include <stdio.h>
//int main()
////{
//	int x;
//	print("enter a numner ");
//	scanf("%d",&x);
//	(x%2 == 0)?
//	print("entered number is even "):
//		print("entered number is odd")
//		return 0;
//	
//}
//

//#include<stdio.h>

//int main()
//{
//    int x=0;
//    if (x==0) {
//    	printf("hi");
//	}else {
//		printf("how are you");
//	}
//	printf("hello");
//	return 0;

//int x;
//printf("enter your marks");
//scanf("%d",&x);
//
//if (x>100)
//	printf("Invalid Marks");
//else
//	if (x>=95)
//		printf("Excellent");
//	else
//		if (x>=85)
//			printf("Very Good");
//	else
//		if (x>=75)
//			printf("Good");
//	else
//		if (x>=65)
//			printf("Average");
//	else
//		printf("You are fail");
//		
//	return 0;

//#include<stdio.h>
//int main()
//{
//	int x=10;
//	printf("x out most statement block %d\n", x);
//	{
//		int x=15;
//		printf("x in 2nd level statement block %d\n",x);
//	}
//	printf("x takes it value of %d back",x);


//	
//}









//*sunil*//*

//{
//	int a;
//	a = printf("Hello World");
//	printf("\n%d",a)
//	
//	//return 0;
//	printf("\n%d",sizeof(a))
//}



//{
//    int x;
//	printf("enter a number whose ASCII code is to be printed");
//	scanf("%d",&x);
//	printf("ASCII code of %c is %d", x, x);
//	
//	return 0;	
//}



//{
////	float c,f;
////	scanf("%f",&c);
////	f = (9.0/5)*c+32;
////	printf("ans is %f",f);
////	return 0;	
////}
//int i=3;
//int l=i/-2;
//int k=i%-2;
//
//}

//{
//	int x=10;
//	++x;
//	printf("%d",x);
//	return 0;
//	
//}


//
//#include<stdio.h>
//int main()
//{
//int x,n=1;
//while (n>0)
//{
//	printf("enter a number whose table is to be printed ");
//	scanf("%d" ,&x);
//	while(n<10)
//	{
//		print("%d * %d = %d\n , x,n,x*n);
//		n++;
//		
//	}
//
//    
//    return 0;
//




//multiplication table
//
//#include <stdio.h>
// 
//int main()
//{
//    int n, i;
// 
//    printf("Enter an integer: ");
//    scanf("%d",&n);
// 
//    for(i=1; i<=10; ++i)
//    {
//        printf("%d * %d = %d \n", n, i, n*i);
//    }
//    
//    return 0;
//}
//
//
//
//




// 	multiplication table
//
//#include <stdio.h>
// 
//int main()
//{
//    int n, i;
// 
//    printf("Enter an integer: ");
//    scanf("%d",&n);
// 
//    for(i=1; i<=5; i)
//    {
//        printf( i);
//    }
//    
//    return 0;
//}



//#include <stdio.h>
//
//int main ()
//{int n,i=1;
//    printf("Enter a number :\n");
//    scanf("%d",&n);
//    for(int k=1;k<=n;k++)
//    {
//        for(i=n;i>k;i--)
//        {
//            printf(" ");
//        }
//        for(i=1;i<=k;i++)
//        {
//            printf("%d",i);
//        }
//        for(i=k-1;i>=1;i--)
//        {
//            printf("%d",i);
//        }
//        printf("\n");
//    }
//    for(int k=n-1;k>=1;k--)
//    {
//        for(i=n;i>k;i--)
//        {
//            printf(" ");
//        }
//        for(i=1;i<=k;i++)
//        {
//            printf("%d",i);
//        }
//        for(i=k-1;i>=1;i--)
//        {
//            printf("%d",i);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//

    
    
//    
//#include <stdio.h>
//int main()
//{
//    int n,j,i;
//    printf("enter the  number of lines ");
//    scanf("%d",&n);
//    for(i=1;i<=n;i++)
//    {
//        for(j=n-i;j>=1;j--)
//            printf(" ");
//        for(j=1;j<=i;j++)
//            printf("%d",j);
//        for(j=i-1;j>=1;j--)
//            printf("%d",j);
//        printf("\n");
//    }
////    for(i=n-1;i>=1;i--)
// //   {
//        
// //   }
//    return 0;
//}
/*
for n = 5
    1
   121
  12321
 1234321
123454321
 1234321
  12321
   121
    1

*/






//*******************************************************************************/
//
//
//                            Online C Compiler.
//                Code, Compile, Run and Debug C program online.
//Write your code in this editor and press "Run" button to compile and execute it.
//
//*******************************************************************************/
//
//#include <stdio.h>
//
//void main(){
//
//	int num1=0,num2=1,num3,num,i;
//	char ans;
//	scanf("%d",&num);
//	//printf("%d,%d,",num1,num2);//
//	ans='n';
//	for (i=1;i<=num;i++)
//	{
//		num3=num1+num2;
//		//printf("%d,",num3);//
//		num1=num2;
//		num2=num3;
//		if (num==num3)
//		{
//			ans='y';
//			break;
//		}
//		
//	}
//	printf("%c",ans);
//	
//}
//


//
//#include <stdlib.h>
//char check(int);
//int main()
//{
//	int num1=0,num2=1,num3,numx,numy,i,temp;
//	char ans;
//	printf("enter the first number ");
//	scanf("%d",&numx);
//	ans = check(numx);
//	if(ans=='n')
//    {
//        printf("%d is not in the fibonacci series ",numx);
//	    goto abc;
//    }
//	printf("enter the second number ");
//	scanf("%d",&numy);
//	ans = check(numy);
//	if(ans=='n')
//    {
//        printf("%d is not in the fibonacci series ",numy);
//	    goto abc;
//    }
//    if(numx>numy)
//    {
//        temp=numx;
//        numx=numy;
//        numy=temp;
//    }
//    num1=0;num2=1;
//	num3=num1+num2;
//	for (i=1;num1<=numy;i++)
//	{
//		num3=num1+num2;
//		if(num1>=numx)
//		    printf("%d ",num1);
//		num1=num2;
//		num2=num3;
//	}
//abc:	return 0;
//}
//char check(int x)
//{
//	char ans='n';
//	int num1=0,num2=1,num3,i;
//	if(x==0)
//	    ans='y';
//	for (i=1;i<=x;i++)
//	{
//		num3=num1+num2;
//		num1=num2;
//		num2=num3;
//		if (x==num3)
//		{
//			ans='y';
//			break;
//		}
//	}
//	return ans;
//}




//
//#include <stdio.h>
//
//int main() {
//    int n,x=1;
//    int n1=0,n2=1;
//    int n3=n1+n2;
//    
//  printf("Enter a number of terms you to print fibbonecci series: ");
//  scanf("%d",&n);
//  if (n<0)
//  printf("Enter positive number");
//  else if (n==0)
//  printf(" ");
//  else if (n==1)
//  printf("%d",n1);
//  else if(n==2)
//  printf("%d,%d",n1,n2);
//  else if (n>2)
//  {
//      printf("%d ",n1);
//      printf("%d ",n2);
//      while (x<n-1)
//    {
//      printf("%d ",n3);
//      n1=n2;
//      n2=n3;
//      n3=n1+n2;
//      
//      x++;
//    }
//  }
//    return 0;
//}
//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//void main()
//{
//	int num1=0,num2=1,num3,numx,numy,i,temp;
//	char ans;
//	printf("enter the first number ");
//	scanf("%d",&numx);
//	//printf("%d,%d,",num1,num2);//
//	ans='n';
//	if(numx==0)
//	    ans='y';
//	for (i=1;i<=numx;i++)
//	{
//		num3=num1+num2;
//		num1=num2;
//		num2=num3;
//		if (numx==num3)
//		{
//			ans='y';
//			break;
//		}
//	}
//	if(ans=='n')
//    {
//        printf("%d is not in the fibonacci series ",numx);
//	    exit(0);
//    }
//	printf("enter the second number ");
//	scanf("%d",&numy);
//	ans='n';
//	num1=0;num2=1;
//	if(numy==0)
//	    ans='y';
//	for (i=1;i<=numy;i++)
//	{
//		num3=num1+num2;
//		num1=num2;
//		num2=num3;
//		if (numy==num3)
//		{
//			ans='y';
//			break;
//		}
//	}
//	if(ans=='n')
//    {
//        printf("%d is not in the fibonacci series ",numy);
//	    exit(0);
//    }
//    if(numx>numy)
//    {
//        temp=numx;
//        numx=numy;
//        numy=temp;
//    }
//    num1=0;num2=1;
//	num3=num1+num2;
//	for (i=1;num3<numy;i++)
//	{
//		num3=num1+num2;
//		num1=num2;
//		num2=num3;
//		if(num3>=numx)
//		    printf("%d ",num3);
//	}
//}

//
//#include <stdio.h>
//#include <stdlib.h>
//char check(int);
//int main()
//{
//int num1=0,num2=1,num3,numx,numy,i,temp;
//char ans;
//printf("enter the first number ");
//scanf("%d",&numx);
//ans = check(numx);
//if(ans=='n')
//{
//printf("%d is not in the fibonacci series ",numx);
//goto abc;
//}
//printf("enter the second number ");
//scanf("%d",&numy);
//ans = check(numy);
//if(ans=='n')
//{
//printf("%d is not in the fibonacci series ",numy);
//goto abc;
//}
//if(numx>numy)
//{
//temp=numx;
//numx=numy;
//numy=temp;
//}
//num1=0;num2=1;
//num3=num1+num2;
//for (i=1;num1<=numy;i++)
//{
//num3=num1+num2;
//if(num1>=numx)
//printf("%d ",num1);
//num1=num2;
//num2=num3;
//}
//abc: return 0;
//}
//char check(int x)
//{
//char ans='n';
//int num1=0,num2=1,num3,i;
//if(x==0)
//ans='y';
//for (i=1;i<=x;i++)
//{
//num3=num1+num2;
//num1=num2;
//num2=num3;
//if (x==num3)
//{
//ans='y';
//break;
//}
//}
//return ans;
//}


#include <stdio.h>
float convert(int,int);
int main()
{
    int f1,f2,i1,i2;
    float ans;
    printf("enter length in feets and inches ");
    scanf("%d%d",&f1,&i1);
    printf("enter length in feets and inches ");
    scanf("%d%d",&f2,&i2);
    ans = convert(f1,i1) + convert(f2,i2);
    printf("sum in cms is %f",ans);
    return 0;
}
float convert(int x,int y)
{
    return((x*12+y)*2.54);
}



#include <stdio.h>






































