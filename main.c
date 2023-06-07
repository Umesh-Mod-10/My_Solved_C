#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
#include <limits.h>

//region Prime Number

void checkprime(int x) {
    int flag = 0, count = 0;
    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag == 1) {
        printf("Not a Prime Number\n");
    }
    else
    {
        printf("Prime Number\n");
    }
}

//endregion

//region Factorial
/*
long long int printfact(int x)
{
    long long int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    printf("%lld\n",fact);
}
 */
//endregion

//region Functions:
/*
int printadd(int a,int b)
{
    return a+b;
}
int printsubtraction(int a,int b)
{
    return a-b;
}
int printmultiply(int a,int b)
{
    return a*b;
}
int printdivide(int a,int b)
{
    return a/b;
}
 */
//endregion

//region Fibonacci Series:
/*
void fib(int n)
{
    int a=1,b=1,temp;
    printf("%d %d ",a,b);
    for(int i=3;i<=n;i++)
    {
        temp=b;
        b=a+b;
        a=temp;
        printf("%d ",b);
    }
    printf("\n");
}
 */
    //endregion

//region Squaring:
/*
void printsq(int n)
{
    printf("%d\n",n*n);
}
 */
//endregion

//region Cubing:
/*
void printqb(int n)
{
    printf("%d\n",n*n*n);
}
 */
//endregion

//region Addition:
/*
int add(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
*/
//endregion


int main() {

    // region Swapping Numbers:
    /*
    int a;
    int b;
    int temp;
    scanf("%d %d",&a,&b);
    temp=b;
    b=a;
    a=temp;

    printf("%d %d",a,b);
    return 0;
    */
    //endregion


    //region Printing a Christmas tree
    /*
    printf("\n");
    printf("  /\\\n");
    printf(" //\\\\\n");
    printf("///\\\\\\\n");
    printf("  ||\n  ||");
    */
    //endregion


    //region Find the largest number
    /*
    int a;
    int b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("%d",a);
    }
    else if(a<b)
    {
        printf("%d",b);
    }
    else
    {
        printf("0");
    }
    */

    //endregion


    //region Check whether the number is positive:
    /*
    int a;
    scanf("%d",&a);
    if(a>=0)
    {
        printf("%d",a);
    }
    else
    {
        printf("-1");
    }
    */

    //endregion


    //region Check whether it is greater than n:
    /*
    int a;
    scanf("%d",&a);
    int n;
    scanf("%d",&n);
    if(a>=n)
    {
        printf("%d",a);
    }
    else
    {
        printf("Nope");
    }
    */

    //endregion


    //region Print numbers in ascending order and descending order:
    /*
    int a,b,c; //5,10,9
    lol:
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a>=c)
    {
        if(b>=c) {
            printf("A: %d %d %d", c, b, a);
            printf("\nD: %d %d %d", a, b, c);
        }

        else{
            printf("A: %d %d %d", b, c, a);
            printf("\nD: %d %d %d\n", a, c, b);
        }
    }
    else if(b>=a && b>=c)
    {
        if(a>=c) {
            printf("A: %d %d %d", c, a, b);
            printf("\nD: %d %d %d\n", b,a,c);
        }

        else{
            printf("A: %d %d %d", b, c, a);
            printf("\nD: %d %d %d\n", a, c, b);
        }
    }
    else if(c>=a && c>=b)
    {
        if(a>=b) {
            printf("A: %d %d %d", b, a, c);
            printf("\nD: %d %d %d\n", c,a,b);
        }

        else{
            printf("A: %d %d %d", a, b, c);
            printf("\nD: %d %d %d\n", c, b, a);
        }
    }
    goto lol;
    */

    //endregion


    //region Print the total marks , average marks and print the grade:
    /*
    int s1,s2,s3;
    scanf("%d %d %d",&s1,&s2,&s3);
    int t=s1+s2+s3;
    int avg=t/3;
    printf("%d %d\n",t,avg);
    if(t>250)
    {
        printf("A");
    }
    else if(t>150)
    {
        printf("B");
    }
    else if(t>100)
    {
        printf("C");
    }
    else if(t<100)
    {
        printf("D");
    }
    */

    //endregion


    //region Find Prime Numbers using Function:
    /*
    int a;
    scanf("%d",&a);
    primeNumber(a);
    */

    //endregion


    //region Print N numbers:
    /*
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        printf("%d ",i);
    }
    */

    //endregion


    //region Printing in reverse order:
    /*
    int n;
    scanf("%d",&n);
    for(int i=n;i>=0;i--)
    {
        printf("%d ",i);
    }
    */
    //endregion


    //region Printing all the even numbers:
    /*
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
     */
    //endregion


    //region Printing all the odd numbers:
    /*
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
     */
    //endregion


    //region Reverse a number:
    /*
    int n,temp=0;
    scanf("%d",&n);
    while(n>0)
    {
        temp=(n%10);
        printf("%d",temp);
        n=n/10;
    }
    */
    //endregion


    //region Sum of all digits:
    /*
    int n,t=0,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        t=n%10;
        sum=t+sum;
        n=n/10;
    }
    printf("%d",sum);
     */
    //endregion


    //region Armstrong Number or not:
    /*
    int n,x=0,t,sum=0;
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        t=n%10;
        sum=(t*t*t)+sum;
        n=n/10;
    }
    if(sum==x)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    */
    //endregion


    //region Table for n till m:
    /*
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++)
    {
        printf("%d ",i*n);
    }
    */
    //endregion


    //region * ascending order:
    /*
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
    }
    */
    //endregion


    //region * descending order:
    /*
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j>=1;j--) {
            printf("*");
        }
        printf("\n");
    }
    */
    //endregion


    //region * right top descending order:
    /*
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        for(int k=1;k<i;k++)
        {
            printf(" ");
        }
        for(int j=i;j<=n;++j)
        {
            printf("*");
        }
        printf("\n");
    }
    */
    //endregion


    //region * bottom descending order:
    /*
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=n-i;k<=n;k++)
        {
            printf(" ");
        }
        for(int j=i;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    */
    //endregion


    //region * Triangle:
    /*
    int i,j,k,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=2;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
     */
    //endregion


    //region Factorial Of a number:
    /*
    int n;
    scanf("%d",&n);
    printfact(n);
    */
    //endregion


    //region Print the Prime Number from 2 to n:
    /*
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    int flag;
    for(i=a;i<=b;i++)
    {
        flag=0;
        for(j=2;j<=b/2;++j)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }
     */
    //endregion


    //region Matrix addition:
    /*
    int r,c;
    printf("Row and Column: ");
    scanf("%d %d",&r,&c);
    int a[r][c],b[r][c],s[r][c],i,j;
    printf("Enter the first Matrix: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second Matrix:\n ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of A and B is:\n ");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
            printf("%d",s[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    */
    //endregion


    //region Matrix transpose:
    /*
    int r,c;
    printf("Row and Column: ");
    scanf("%d %d",&r,&c);
    int a[r][c],s[r][c],i,j;
    printf("Enter the first Matrix: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Transpose of A is:\n ");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            s[i][j]=a[j][i];
            printf("%d",s[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    */
    //endregion


    //region Print Fibonacci series:
    /*
    int n,a=1,b=1,temp,i;
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(int i=3;i<=n;i++)
    {
        temp=b;
        b=a+b;
        a=temp;
        printf(" %d",b);
    }
     */
    //endregion


    //region Print prime numbers between 2 numbers:
    /*
    int a, b, flag, i, j;
    printf("The Lower and Upper Limits are: ");
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        flag = 0;
        for (j = 2; j <= b / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d ", i);
        }
    }
    */

    //endregion


    //region Print all characters and numbers with their ascii values:
    /*
    int i;
    for(i=65;i<=90;i++)
    {
        printf("%c ",i);
    }
    printf("\n\n");
    for(i=97;i<=122;i++)
    {
        printf("%c ",i);
    }
    printf("\n\n");
    for(i=48;i<=57;i++)
    {
        printf("%c ",i);
    }
    */
    //endregion


    //region Print the factorial sum: [1/2!+2/3!+....]
    /*
    int n,i,j;
    float sum=0,fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=1;
        for(j=1;j<=i+1;j++)
        {
            fact = fact * j;
        }
        sum = sum + (i /fact);

    }
    printf("%f",sum);
    */
    //endregion


    //region Calculate the average for n numbers:
    /*
    int n,n1,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&n1);
        sum=sum+n1;
    }
    printf("%f",(float)sum/n);
    */
    //endregion


    //region Print the ascii chart:
    /*
    int i;
    for( i=0;i<=255;i++)
    {
        printf("%d-%c\t",i,i);
    }
    */
    //endregion


    //region Print the corresponding numbers according to switch case:
    /*
    int n;
    scanf("%d",&n);
    switch (n) {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        case 0:
            printf("Zero");
            break;
        default:
            printf("Enter a valid option.");
    */
    //endregion


    //region Print the numbers reverse in switch case:
    /*
    int n;
    scanf("%d",&n);
    int rem;
    while(n>0)
    {
        rem = n%10;
        switch (rem)
        {
            case 0:
                printf("zero ");
                break;
            case 1:
                printf("one ");
                break;
            case 2:
                printf("two ");
                break;
            case 3:
                printf("three ");
                break;
            case 4:
                printf("four ");
                break;
            case 5:
                printf("five ");
                break;
            case 6:
                printf("six ");
                break;
            case 7:
                printf("seven ");
                break;
            case 8:
                printf("eight ");
                break;
            case 9:
                printf("nine ");
                break;
            default:
                printf("Invalid option ");
                break;
        }
        n=n/10;
    }
    */
    //endregion


    //region Symbols in a switch case:
    /*
    char n;
    scanf("%c",&n);
    int a,b;
    scanf("%d %d",&a,&b);
    switch (n) {
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break;
        case '%':
            printf("%d",a%b);
            break;
        default:
            printf("Use the correct operator");
            break;
    }
     */
    //endregion


    //region Performing Arithmetic Operations:
    /*
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",printadd(a,b));
    printf("%d\n",printsubtraction(a,b));
    printf("%d\n",printmultiply(a,b));
    printf("%d\n",printdivide(a,b));
    */
    //endregion


    //region Calling Prime,Fibonacci and Factorial Functions:
    /*
    int n;
    scanf("%d",&n);
    checkprime(n);
    fib(n);
    printfact(n);
     */
    //endregion


    //region Calling functions to calculate the squares and cube:
    /*
    int n;
    scanf("%d",&n);
    printsq(n);
    printqb(n);
    */
    //endregion


    //region Accept an array and print:
    /*
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    */
    //endregion


    //region Reverse the array:
    /*
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<n;i++)
    {
        scanf("%d ",&a[i] );
    }
    for(int i=n-1;i>=1;i--)
    {
        printf("%d ",a[i]);
    }
     */
    //endregion


    //region Add all the values in an array:
    /*
    int n;
    scanf("%d",&n);
    int a[n],sum=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=1;i<=n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
    */
    //endregion


    //region Store the values of fibonacci series:
    /*
    int n,a=1,b=1,temp;
    scanf("%d",&n);
    int f[n];
    f[1]=1;
    f[2]=1;
    for(int i=3;i<=n;i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ",f[i]);
    }
    */
    //endregion


    //region Max and Min value:
    /*
    INT_MIN;
    int n,max=0,min=INT_MIN - 1;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++)
    {
        if(a[i] < min) {
            min = a[i];
        }
    }
    printf("%d %d",max,min);
     */
    //endregion


    //region Print the even and odd numbers:
    /*
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("%d ",a[i]);
        }
    }
    */
    //endregion


    //region Daily Question:
    /*  int a,b,c;
      scanf("%d %d %d",&a,&b,&c);
      int p1=0,p2=0,p3=0;
      p1=a*b;
      p2=b*c;
      p3=c*a;
      int sum=0;

    //  printf("%d %d %d",p1,p2,p3);
      if(p1==p2 && p2==p3)
      {
          printf("%d",p1);
      }
      else if(p1!=p2 && p2!=p3 && p3!=p1)
      {
          printf("%d",p1+p2+p3);
      }
      else
      {
          if(p1==p2)
          {
              printf("%d",p1+p3);
          }
          else if(p1==p3)
          {
              printf("%d",p1+p2);
          }
          else
          {
              printf("%d",p2+p3);
          }
      }
   */
    //endregion


    //region Print the even digits and then the odd ones from a number N:
    /*
    int a;
    scanf("%d", &a);
    int t = a;
    int len = 0;
    while (t != 0) {
        t /= 10;
        len++;
    }
    for (int i = 0; i < len; i++)
    {
        int p = pow(10, len - i - 1);
        if((a/p%10)%2 == 0)
        printf("%d", a / p % 10);
    }
    for(int i=0; i<len; i++){
        int p = pow(10,len - i - 1);
        if((a/p%10)%2 == 1)
            printf("%d",a/p%10);
    }
    */
    //endregion


    //region Print the Negative and Positive Numbers:
    /*
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            printf("%d ",a[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
    }
     */
    //endregion


    //region Build a Calculator:
    /*
    char x;
    scanf("%c",&x);
    int a,b;
    scanf("%d %d",&a,&b);
    switch (x) {
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break;
        case '%':
            printf("%d",a%b);
            break;
        default:
            printf("Enter a Valid Option");
    }
    */
    //endregion


    //region Function Calling Addition:
    /*
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=add(a,b);
    printf("%d",sum);
    */
     //endregion


    //region Print the Average and Total of the array:
    /*
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d %d",sum,sum/n);
     */
    //endregion


    //region Printing in Ascending order:
    /*
    int n,temp=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
        printf("%d ",a[i]);
    }
    */
    //endregion


    //region Printing in Descending order:
    /*
    int n,temp=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        printf("%d ",a[i]);
    }
    */
    //endregion


    //region Subtraction of 2 Matrix:
    /*
    int c,r;
    scanf("%d %d",&c,&r);
    int a[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int b[c][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int sub[c][r];
    for(int i=0;i<r;i++)
    {
        printf("\n");
        for(int j=0;j<c;j++)
        {
            sub[i][j]=a[i][j]-a[i][j];
            printf("%d",sub[i][j]);
            printf("\t");
        }
        printf("\n");
    }
    */
    //endregion


    //region Using Strings functions:
    //endregion

        //region String Length(strlen and strnlen):
        /*
        char example[100];
        int n;
        scanf("%s",example);
        scanf("%d",&n);
        printf("%d %d",strlen(example), strnlen(example,n));
        */
        //endregion

        //region String Compare(strcmp and strncmp):
        /*
        char example1[100];
        char example2[100];
        scanf("%s\n%s",example1,example2);
        int n;
        scanf("%d",&n);
        if(strcmp(example1,example2)==0)
        {
            printf("String are Equal\n");
        }
        else
        {
            printf("String are Different\n");
        }
        if(strncmp(example1,example2,n)==0)
        {
            printf("String are Equal\n");
        }
        else
        {
            printf("String are Different\n");
        }
         */
        //endregion

        //region String Joining(strcat and strncat):
        /*
        char example1[100];
        char example2[100];
        int n;
        scanf("%d",&n);
        scanf("%s\n%s",example1,example2);
        printf("%s", strcat(example1,example2));
        strncat(example1,example2,3);
        printf("\n%s",example1);
        */
        //endregion

        //region String Copy(strcpy and strncpy):
        /*
        int n;
        scanf("%d",&n);
        char example1[100];
        char example2[100];
        scanf("%s\n%s",example1,example2);
        strcpy(example1,example2);
        printf("%s",example1);
        strncpy(example1,example2,n);
        printf("%s",example1);
         */
        //endregion

    //region Copy a string without any function:
    /*
    char a[100];
    char b[100];
    int i;
    scanf("%s",a);
    for(i=0; a[i]!='\0';++i)
    {
        b[i]=a[i];
    }
    b[i]='\0';

    printf("%s",b);
    */
    //endregion

}


//Creator: Umesh Ramanathan
//GitHub: Umesh-Modder-10