/*     TEENAGER ADULT BABY????
#include <stdio.h>
#include <math.h>
int main(){
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>18){
        printf("you are a not a teenager/ you are an adult");
        
    }
    else if(age>=13){
        printf("you are a teenager");
    }
    else if(age<13){
        printf("you are a child");
    }
    return 0;


}
#include<stdio.h>
#include<math.h>
int main(){
    int a;
    a=!(3!=4);
    printf("%d",a);

}*/
/*            CALCULATORcalculator 
#include<stdio.h>
#include<math.h>
int main(){
    char opr;
    float sum,numb1,numb2,diff,multiplication,div1,div2;
    printf("choose the operator +,-,*,/",opr);
    scanf(" %c",&opr);
    printf("enter the operands(only two)");
    scanf(" %f %f", &numb1, &numb2);
    switch(opr){
        case '+':
                sum=numb1+numb2;
                printf("the sum is: %f",sum);
                break;
        case'-':
                if(numb1>numb2){
                    diff=numb1-numb2;
                    printf("the difference is:%f",diff);}
                else {
                    diff=numb2-numb1;
                    printf("the difference is:%f",diff);
                    
                }
                break;
        case'*':
                multiplication=numb1*numb2;
                printf("the multiplication of num1 and num2 is:%f",multiplication);
                break;
        case '/':
                div1=numb1/numb2;
                div2=numb2/numb1;
                printf("the division of num1 by numb2 is%f;",div1);
                printf("the division of num2 by numb1 is%f;",div2);
                break;
        default:
        printf("invalid operator");
        break;}

    return 0;
            }     

                    
                
              

                        
    

#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator); // Note the space before %c to consume any leftover newline characters

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

          return 0;
}*/


/*PASSED OR FAILED????
#include<stdio.h>
#include<math.h>
int main(){
    int totalMarks;
    printf("enter your total marks:");
    scanf(" %d",&totalMarks);
    totalMarks>=30 ? printf("PASSED") : printf("FAILED");
}*/
/*fail or pass
#include<stdio.h>
#include<math.h>
int main(){
    int marks;
    printf("ENTER YOUR MARKS:");
    scanf(" %d",&marks);
    if( marks==0){
        printf("ERROR");
    }
    else if(marks<=30 && marks>0){
        printf("YOU FAILED MORON!");}

    else if(marks>30 && marks<90){
         printf("try HARDER you LOSER!");}
    else if(marks>=90 && marks<=95){
        printf("not enough!");
    }     
    else if(marks>95 && marks<=100){
        printf("who do you think you are, EINSTEIN???");
    }
    else
    return 0;
}*/
/* hello world 5 times
#include<stdio.h>
#include<math.h>
int main(){
    int i;
    for(i=1;i<=5;i++){
        printf("hello world\t");
    }
return 0;
}

#include<stdio.h>
#include<math.h>
int main(){
    int i;
    for(i=1;i<=100;i++){
        printf("%d\n",i);
    }
    return 0;
}   
    */
   /*   FOOOOOR LOOOP
#include<stdio.h>
#include<math.h>
int main(){
    int i;
    for(i=1; ;i++){
        printf("%d\n",i);
    }
    return 0;
}   
   */
  /*   INFINITE LOOP
#include<stdio.h>
#include<math.h>
int main(){
    int s;
    int num;
    int i;
    printf("the table of");
    scanf(" %d", &num);
    for(i=1;i<=10 ;i++){
        s=i*num;
        printf("%d\n",s);
    }
    return 0;
}
    */
/* //userMade functions
#include<stdio.h>
#include<math.h>
void printTable();
int main(){
    int num;
    printTable();
    return 0;
}
void printTable(){
    int s;
    int num;
    int i;
    printf("the table of");
    scanf(" %d", &num);
    for(i=1;i<=10 ;i++){
        s=i*num;
        printf("%d\n",s);
    }

}
    */
   /*FOR LOOP
   //printing a table from user given input
#include<stdio.h>
#include<math.h>
int main(){
    int result;
    int num;
    int i;
    printf("the table of");
    scanf(" %d",&num);
    for(i=1;i<=10;i++){
        result=num*i;
        printf(" %d", result);
        return 0;
    }

}
    */

    /* UNSUCCESSFUL WHILE LOOP ATTEMPT 
#include<stdio.h>
#include<math.h>
int main(){
    int result;
    int num;
    int i;
    i=1;
    printf("the table of");
    scanf(" %d",&num);
    while(i<=10){
        result=num*i;
        printf(" %d", result);
        i=i++;
        return 0;
    }   
}
    
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    int result;
    int i;
    printf("the table of");
    scanf(" %d",&num);
    for(i=1;i<=10;i++){
        result=num*i;
        printf("%d",result);
        return 0;
    }
}*/
/*   //PRINT HELLO WORLD FIVE TIMES USING RECCURSION 
#include<stdio.h>
#include<math.h>




void printHW();



int main(){


    //functionCALLING 
    printHW(5);

}


//function DEFINITION

void printHW(int n){
    if(n==0){
        return;
    }
    printf("hello world\n");
    printHW(n-1);
}
  */


 /*  //SUM OF N NATURAL NOS WITH RECURSION
 #include<stdio.h>
#include<math.h>
int natural(int num);

int main(){
    
    int num;
    printf("enter a number\n");
    scanf(" %d", &num);
    printf(" the sum of natural numbers is: %d",natural(num));
    natural(num);
    return 0;
}
int natural(int num){
    if(num==1){
        return 1;
    }
    int sumNM1;
    sumNM1=natural(num-1);
    int sumnum=sumNM1+num;
    return sumnum;
    
}
 */
/*//sum of n natural WITHOUT RECCURRSION



#include<stdio.h>
#include<math.h>
int sumN(int numb);
int main(){
    int numb;
    printf("enter the parameter");
    scanf(" %d",&numb);
    sumN(numb);
    return 0;

    
}
int sumN(int numb){
    int sum;
    sum=((numb*(numb+1))/2);
    printf(" %d",sum);
    return sum;
    
}
*/

/*  //NOT RECURSION!!!!
#include<stdio.h>
#include<math.h>
int sumN(int numb);
int main(){
    int numb;
    printf("enter the parameter");
    scanf(" %d",&numb);
    sumN(numb);
    return 0;

    
}
int sumN(int numb){
    int sum;
    sum=((numb*(numb+1))/2);
    printf(" %d",sum);
    return sum;
    
}
*/

/*     //AREA of rec tri circle
#include<stdio.h>
#include<math.h>
int main(){
    float aCrl,aRec,aTri,b,l,r,h,B;
    int input;
    float PI;
    PI=3.14;
    printf("press:\n'1' for area of tiangle\n'2' for area of rectangle\n'3' for area of circle");
    scanf(" %d",&input);
    switch(input){
        case 1:
         printf("enter the base and height of the triangle respectively:");
         scanf(" %f %f", &h, &b);
         aTri=(0.5)*b*h;
         printf("the area of triangle is:%f",aTri);
         break;
        case 2:
         printf("enter the length and breadth of the rectangle respectively:");
         scanf(" %f %f", &l, &B);
         aRec=l*B;
         printf("the area of rectangle is:%f",aRec);
         break;
        case 3:
         printf("enter the radius of the circle:");
         scanf(" %f", &r);
         aCrl=PI*r*r;
         printf("the area of circle is:%f",aCrl);
         break;
        default:
         printf("invalid response!!!!!");
         break;
        


    }
    return 0;
}

*/

/*  //FACTORIAL USING RECURSION
#include<stdio.h>
#include<math.h>
int factorial(int num);
int main(){
int num;
printf("the factorialt of:");
scanf(" %d", &num);
factorial(num);
printf("factorial of given no. is:%d",factorial(num));
return 0;
}
int factorial(int num){
    int numMinus,n;
    if(num==0){
        return 1;
    }
    numMinus=factorial(num-1);
    n=numMinus*num;
    return n;

}
    */

    /* FAILED ATTEMPT AT QUADRATIC ROOTS
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,root1,root2,D,sq,power;
   // sq=sqrt(4);
    //power=pow(2,5);
    root1=-b+(sqrt(((pow(b,2))-(4*a*c))));
    root2=-b-(sqrt(((pow(b,2))-(4*a*c))));
    D=(pow(b,2))-(4*a*c);
    printf("ENTER THE COEFFICIENT OF X SQUARE ");
    scanf(" %f", &a);
    printf("ENTER THE COEFFICIENT OF X ");
    scanf(" %f", &b);
    printf("ENTER THE COEFFICIENT OF OF 1 ");
    scanf(" %f", &c);
    //printf("sqrt is %f",sq);
    //printf("2 power 5 is is %f",power);
    //printf("%f",root1);
    
    if(a>0 && D>0){
        printf("the two real roots are\n %f %f", root1, root2);


    }
    return 0;
}    
*/


/* //Patterns using c\\

#include<stdio.h>
#include<math.h>
int main(){
   int m,n,i,j,k,l,sum=0,trace=0,p,o,w,s,d,f,q,r,y,h,x,v;
   printf("enetr the order of your first matrix:\n");
   scanf("%d %d",&m,&n);
   printf("enter the elements");
   int a[m][n];
   for(i=0;i<m;i++){
      for(j=0;j<n;j++){
         scanf("%d",&a[i][j]);
         sum+=a[i][j];
         if(i==j)
           trace+=a[i][j];
      }

   }
printf("\n");
   for(k=0;k<m;k++){
      for(l=0;l<n;l++)
         printf("%d\t",a[k][l]); 
      printf("\n\v");
   }
   printf("\nthe transpose of the matrix is\n");
   for(p=0;p<n;p++){
      for(o=0;o<m;o++)
         printf("%d\t",a[o][p]);
      printf("\n\v");
   }
printf("\nthe sum of all elements of the matrix is%d\n",sum);
if(m==n)  
  printf("the trace is%d\n",trace); 



   printf("enetr the order of your second matrix:\n");
   scanf("%d %d",&w,&s);
   printf("enter the elements");
   int t[w][s];


  for(f=0;f<w;f++){
      for(d=0;d<s;d++){
         scanf("%d",&t[f][d]);
         sum+=t[f][d];
         if(f==d)
           trace+=t[f][d];
      }
   printf("\n");}
   for(i=0;i<w;i++){
      for(j=0;j<s;j++)
         printf("%d\t",t[f][d]); 
      printf("\n\v");
   }
   int c[m][s];
   for(y=0;y<m;y++){
      for(h=0;h<s;h++){
         c[y][s]=a[i][j]*t[d][f];
      }
   }
   }

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){
    int i;
    int j;
    for(i=9;i>0;i--){
        for(j=1;j<=i;j++){
        printf("   bajrangi");

    }
    printf("\n");
}
    return 0;

}*//*
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main(){
    float t,r,s;
    s=5.00;
    r=5.00
    
    
    
    
     
    t=s/r;
    printf("resukt %f",t);
    return 0;
    
    
}*/
//BADLY designed code
/*#include<stdio.h>
#include<string.h>
int main(){
   int i;
   char name[50];
   printf("enter your good name\t");
   scanf("%s",&name);
   for(i=0;i<50;i++){
      if(name[i]=='\0'){
         printf("the length of your name is %d",i);
      break; }
      
   }

}
//better designed code
#include<stdio.h>
#include<string.h>
int main(){
   char firstName[50],lastName[50];
   int i=0,j=0,k=0,h,f;
   printf("enter your name\t");
   scanf("%s%s",&firstName,&lastName);
   while(firstName[i]!='\0'){
      i++;
   }
   while(lastName[j]!='\0'){
      j++;
   }
      for(f=0;f<j;f++){

          firstName[i+f]=lastName[f];
      }

   
   printf("%s",firstName);
   while(firstName[k]!='\0'){
      k++;
   }
   printf("\nthe length is:%d\n",k);
   
   

}
#include<stdio.h>
#include<string.h>
int main(){
   char str1[50],str2[50];
   int i,j,k,h;
   printf("enter two words to check wether pallindrome or not\t");
   scanf("%s%s",&str1,&str2);
   h=0;
   k=0;
   int isPalindrome;
   while(str1[h]!=0){
      h++;
   }
   while(str2[k]!='\0'){
      k++;
   }
   
   if(h!=k){
      printf("NOT PALLINDROME!!!");
   }
   else{
      
      for(i=0;i<h;i++){
         if(str1[i]==str2[h-i-1]){
            isPalindrome=1;
            
         }
         else{
             isPalindrome=0;
             break;
         }

         
      }
   }
   if(isPalindrome==1)
          printf("PALINDROME!!\n");
   else
         printf("NOT PALINDROME!!");       
}
*/
#include<stdio.h>
#include<string.h>
int main(){
   int k=0,i,j,h; 
   int str1[50],str2[50];
   printf("enter two strings to check for palindrome\t");
   scanf("%s%s",&str1,&str2);
   i=0;
   j=0;
   int isPalindrome;
   while(str1[i]!=0){
      i++;
   }
   while(str2[j]!=0){
      j++;
   }
   if(i!=j)
     printf("\nNOT PALINDROME!!!\n");
   else{
      for(h=0;h<j;h++){

          if(str1[h]==str2[j-h-1]){
            isPalindrome=1;

          }
         else{
            isPalindrome=0;
            break;
         }


      }
   }
   if(isPalindrome==1)
       printf("\nPALINDROMDE!!!\n");
   else
       printf("\nNOT PALINDROME\n");    


}

   
 
   








/*#include<stdio.h>
int main()
{
int m,n,p,q,i,j,k,a[10][10],b[10][10],c[10][10];
printf("Enter the size matrix A \n");
scanf("%d%d",&m,&n);
printf("Enter the size matrix B \n");
scanf("%d%d",&p,&q);
if(n!=p)
{
   printf("Matrix multiplication is not possible\n");
}
else
{
   printf("Enter the elements of matrix A \n");}
for(i=0;i<m;i++)
{
   for(j=0;j<n;j++)
   scanf ("%d",&a[i][j]);
}
printf("Enter the elements of matrix B \n");
for(i=0;i<p;i++)
{
    for(j=0;j<q;j++)
    scanf("%d",&b[i][j]);
}
for(i=0;i<m;i++)
{
   for(j=0;j<q;j++){
      c[i][j]=0;
      for(k=0;k<n;k++)
      c[i][j]=c[i][j]+a[i][k]*b[k][j];
}
}
printf("A-matrix is\n");
for(i=0;i<m;i++){

   for(j=0;j<n;j++)
{
   printf("%d\t",a[i][j]);
}
   printf("\n");
}
printf("B- matrix is \n");
for(i=0;i<p;i++)
{
   for(j=0;j<q;j++)
   {
      printf("%d\t",b[i][j]);
}
   printf("\n");
}
printf("The resultant matrix C is \n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n\v");
}
}

*/
