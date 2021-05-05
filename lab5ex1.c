#include "stdio.h"
int main(){
int i,j,n;
printf("Введіть дійсні числа n: ");
scanf("%d",&n);

float a[n],t;

for(i=0;i< n;i++)
{
printf("Введіть %d елемент масиву: ", i+1);
scanf("%f",&a[i]);
}

printf("\n");
for(i=0;i< n&&i<3;i++)
for(j=1;j< n;j++)
if(a[j-1]>a[j]){t=a[j];a[j]=a[j-1];a[j-1]=t;
}
printf("Сума трьох найбільших чисел=%g\n",a[n-3]+a[n-2]+a[n-1]);

return 0;
}
