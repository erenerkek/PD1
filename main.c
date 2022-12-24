#include <stdio.h>
#include <math.h>
/* 1
int main() {
    int vertical;
    int horizontal;
    int area;
    printf("Please enter 1 side of the rectangle : ");
    scanf("%d", &vertical);
    printf("Please enter the other side of the rectangle : ");
    scanf("%d" , &horizontal);
    area = vertical * horizontal;
    printf("The area of the rectangle is : %d", area);
    printf("The perimeter of the rectangle is: %d",2*vertical+2*horizontal);
    return 0;
}*//*2
int main()
{
    int a, b, c, root1, root2;
    printf("Give a b c values for the quadratic equation:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int d = (pow(b, 2)) - (4*a*c);
    root1 = (-b + pow(d,0.5)) / 2 * a ;
    root2 = (-b - (pow(d,0.5))) / 2 * a ;
    printf("1st root is %d\n2nd root is %d", root1, root2);
}*//* 3
int main()
{
    int n=0;
    while(n<10)
    {
        printf("HELLO WORLD\n");
        n++;
    }
}*//* 4
int main()
{
    int i=0,sum=0;
    while(i<50)
    {
        sum=sum+i;
        i++;
    }
    printf("%d",sum);
}
*//* 5
int main()
{
    printf("%f", pow(2,4));
}
*//* 6
int main()
{
    int a,b, max, i,lcm=0;
    printf("Enter your first value: ");
    scanf("%d",&a);
    printf("Enter your second value: ");
    scanf("%d",&b);

    if(a>b)
        max = i = a;
    else
        max = i =b;

    while(1)
    {
        if(max%a==0&&max%b==0)
        {
         lcm = max;
         break;
        }
        max=max+i;
    }
    printf("%d",lcm);
}*//* 7
int main()
{
    int i,j,c,n;
    printf("Enter your n value: ");
    scanf("%d",&n);
    for (int j = 0; j <=n ; ++j) {
        c=0;
        for(i=1;i<=j;i++)
        {
            if(j%i==0)
                c++;
        }
        if(c==2)
            printf("%d\n",j);

    }
}*//* 8
int main() {
    int i, j, c, n, sum = 0;
    printf("Enter your n value: ");
    scanf("%d", &n);
    for (int j = 0; j <= n; ++j) {
        c = 0;
        for (i = 1; i <= j; i++) {
            if (j % i == 0)
                c++;
        }
        if (c == 2)
            sum = sum + j;


    }
    printf("%d",sum);
}*//* 9
int main() {
    int n, arm, i, digit, c = 0, temp, temp2;
    printf("Enter your num: ");
    scanf("%d", &n);
    temp = n;
    temp2 = n;
    while (n > 0) {
        n = n / 10;
        c++;
    }
    while (temp > 0) {
        digit = temp % 10;
        arm = arm + pow(digit, c);
        temp = temp / 10;
    }
    arm = arm - 1;
    if (arm == temp2)
        printf("this number is armstrong");
    else
        printf("this number is not armstrong");
}*//* 10
int main(){
    int n , sum = 0;
    scanf("%d" , &n);
    for(int i = 1 ; i <= n ; i++)
    {
        int x = i , s = 0;
        int c = 0;
        while(i > 0)
        {
            i = i / 10;
            c++;
        }
        i = x;
        while(i > 0)
        {
            int p = 1;
            int d = i % 10;
            for(int j = 0 ; j < c ; j++)
            {
                p = p * d;
            }
            s += p;
            i = i / 10;
        }
        if(x == s)
        {
            printf("%d\n" , x);
        }
        i = x;
    }
}*//* 11
int main()
{
    int n,i,j;
    printf("Enter your value: ");
    scanf("%d",&n);
    for (int i = 1; i <n ; ++i) {
        if(n%i==0)
            printf("perfect");
        else
            printf("not");
    }
}*//* 12
 int main() {
    int n, i, j;
    printf("Enter your value: ");
    scanf("%d", &n);
    for (int i = 1; i < n; ++i) {
        if (n % i == 0)
            j = j + i;

    }
    printf("%d", j);
}*//* 13
int main()
{

        int a, b = 1, c = 0, d, n;

        scanf("%d", &n);

        d = n;
        while(n > 0)
        {
            a = n % 10;
            n /= 10;

            while(a > 0)
            {
                b *= a;
                a--;
            }
            c += b;
            b = 1;
        }
        if(d == c)
        {
            printf("Strong");
        }
        else
        {
            printf("Not Strong");
        }

        return 0;

}*//* 14
int main()
{

    int a, b = 1, c = 0, d, n, e;

    scanf("%d", &e);

    for(n = 1; n <= e; n++)
    {
        d = n;
        while(d > 0)
        {
            a = d % 10;
            d /= 10;

            while(a > 0)
            {
                b *= a;
                a--;
            }
            c += b;
            b = 1;
        }
        if(n == c)
        {
            printf("%d\n", n);
        }
        c = 0;
    }

    return 0;
}*//* 15
    int main(){
    int n;
    scanf("%d" , &n);
    int x = n , s = 0;
    while(n > 0)
    {
        int d = n % 10;
        s = s * 10 + d;
        n = n / 10;
    }
    if(x == s)
    {
        printf("palindrom");
    }
    else
    {
        printf("not palindrom");
}
 }
     */
/* 16
 * int main(){
   float x;
   scanf("%f" , &x);
   double sum = 0;
   for(float i = 0 ; i <= x ; i = i + 2)
   {
       float p = 1;
       for(int j = 0 ; j < i ; j++)
       {
           p = p * x;
       }
       float f = 1;
       for(float j = 1 ; j <= i ; j++)
       {
           f = f * j;
       }
       sum += p / f;
   }
   }
   printf("%lf" , sum);
   */
/* 17
 * int main(){
    int n;
    scanf("%d" , &n);
    float sum = 0;
    for(float i = 1 ; i <= n ; i++)
    {
        printf("1/%f + " , i);
        sum += 1/i;
    }
    printf("\nsum = %f" , sum);
    }
    *//* 19
int function(int x);

int main(){

    float x, n, sum = 0, i;

    printf("x?\n");
    scanf("%f", &x);
    printf("lenght\n");
    scanf("%f", &n);

    for(i = 0; i < n; i++){

        sum += pow(x, i) / function(i);
    }
    printf("%f", sum);

    return 0;
}

int function(int x){
    float func = 1;
    while(x > 0){
        func *= x;
        x--;
    }
    return func;
}
*//* 20
int main(){

    int n, x, i, sum = 0;

    printf("what is x\n");
    scanf("%d", &x);
    printf("define how many variables in your series\n");
    scanf("%d", &n);

    for(i = 1; n > 0; i += 2, n--){

        sum += pow(x, i);
    }
    printf("%d", sum);

    return 0;
}*//* 21
int main () {

    int a, sum = 0, b = 0, i;

    printf("enter a number : ");
    scanf("%d", &a);

    for (i = 1; i <= a; i++) {

        b = b * 10 + 1;
        sum += b;
    }
    printf("\n%d", sum);

    return 0;
}
*//* 22
int main(){
    int s = 0;
    for(int i = 101 ; i < 200 ; i++)
    {
        if(i % 9 == 0)
        {
            printf("%d  " , i);
            s += i;
        }
    }
    printf("\nsum = %d" , s);
    }
*//* 23
 int main(){
    int num , sum = 0 , p , a = 1;
    scanf("%d" , &num);
    while(num>0)
    {
        p=num%2;
        sum=sum+p*a;
        num/=2;
        a*=10;
    }
    printf("binary = %d" , sum);
    }
     *//*24
int main(){
    int a, b, c = 0, d = 0;

    printf("enter a binary number\n");

    for(scanf("%d", &a); a > 0; a /= 10) {

        b = a % 10;
        if(b == 1){
            d += pow(2, c);
        }
        c++;
    }
    printf("%d", d);

    return 0;
}*//* 25
     int main() {
    int n;
    scanf("%d", &n);
    int c = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                c = 1;
            } else {
                c = c * (i - j + 1) / j;
            }
            printf("%4d", c);
        }
        printf("\n");
    }
}*/