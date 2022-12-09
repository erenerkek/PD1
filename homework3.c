#include <stdio.h>
/* 1- Add two number entered by user
int main() {
    int a,b;
    printf("Enter your first number: ");
    scanf("%d",&a);
    printf("Enter your second number: ");
    scanf("%d",&b);

    printf("%d",a+b);
}
*/
/* 2- Calculate the area of circle
int main()
{
    float r, area, pi=3.14;

    printf("Enter your radius: ");
    scanf("%f",&r);
    area=pi*(r*r);
    printf("%f",area);
}
*/
/* 3-is number odd or even?
int main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    if(a%2==0)
        printf("EVEN");
    else
        printf("ODD");
}
*/
/* 4- is temperature above or below freeze point?
int main()
{
    int tem;
    printf("Enter your tempeture: ");
    scanf("%d",&tem);

    if(tem<0)
        printf("below freeze point");
    else if(tem>0)
        printf("above freeze point");
    else
        printf("at freeze point");

}
*/
/* 6- feet to cm
int main()
{
    float feet, cm;
    printf("Enter your feet value: ");
    scanf("%f",&feet);
    cm=feet*30.48;
    printf("%f",cm);
}
*/
/* 7- print square of all numbers from 1 to 10
int main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("%d ",(i*i));

    }

}
 */
/* 8- sum of numbers low to high
int main()
{
    int sum,LOW, HIGH=9;
    for(LOW=3;LOW<HIGH;LOW++)
    {
        sum=sum+LOW;
    }
    printf("%d",sum);
}
 */
/*9- print divisable numbers
int main()
{
    int low,high,num;
    printf("Enter your values: ");
    scanf("%d %d %d",&low,&high,&num);

    while(low<high)
    {
        if(low%num==0)
            printf("%d ",low);
        low++;
    }

}*/
/* 10-biggest num
int main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b) {
        if (a > c)
            printf("%d is the biggest", a);
    }
    else if(b>a) {
        if (b > c)
            printf("%d is the biggest", b);
    }
    else {
        printf("%d is the biggest", c);
    }
    }
*/
/* 11-product and sum of entered numbers by user
int main(){
    int counter=0,num=0,sum=0,product=1;
    for(counter=1;counter<=10;counter++)
    {
        printf("Enter your number: ");
        scanf("%d",&num);
        sum = sum+num;
        product= product*num;
    }
    printf("sum= %d, product= %d",sum,product);
}
*/
/* 12-low to high
int main()
{
    int high, low, step;
    printf("Enter high, low and step: ");
    scanf("%d %d %d",&high,&low,&step);
    while(low<=high){
        printf("%d ",low);
        low=low+step;
    }

}*//* 13-Multiplication table of 6
int main()
{
    for(int i=1;i<=10;i++)
    {
        printf("%d",i*6);
    }
}
*/
/* 14-factorial of n
int main()
{
    int value,i,fac=1;
    printf("Enter your value: ");
    scanf("%d",&value);
    for(i=1;i<=value;i++)
    {
        fac=fac*i;
    }
    printf("%d",fac);
}*/
/* 15-n to 1
int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d",&n);
    while(n>=1){
        printf("%d ",n);
        n--;
    }
}
*//*16 - even numbers between 1000-2000
int main()
{
       int n,sum;
       for(int i=1000;i<=2000;i++)
       {
           if(i%2==0)
           {
               printf("%d ",i);
               sum=sum+n;
           }
       }
    printf("%d",sum);
}*//* 17- s=1/2+1/4.....+1/n
int main()
{
    int n;
    float i=2;

    float sum=0;
    printf("Enter value: ");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+(1/i);
        i=i+2;
    }
    printf("%f",sum);
}*//* 19-Multiplication table of n
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        printf("%d ",i*n);
    }
}
 *//* 20- Digit count of number
int main()
{
    int num,counter=0;
    printf("Enter your number: ");
    scanf("%d",&num);
    while(num>0){
        num=num/10;
        counter++;
    }
    printf("%d ",counter);
}*//*21- first and last digit finder
int main()
{
    int n, first, last;
    printf("Enter number: ");
    scanf("%d", &n);
    last = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    first = n;
    printf("first digit: %d and last digit: %d", first,last);
}*/ /* 23- is number polindrom or not
int main()
{
    int n, rev = 0, digit, num;
    printf("Enter an integer: ");
    scanf("%d", &n);
    num = n;

    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    if (num == rev)
        printf("%d is a palindrome.", num);
    else
        printf("%d is not a palindrome.", num);
}*/
int main()
{
    int a, b, i, hcf;

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    for(i = 1; i <= a || i <= b; i++) {
        if( a%i == 0 && b%i == 0 )
            hcf = i;
    }

    printf("HCF = %d", hcf);
}
