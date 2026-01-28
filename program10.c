#include <stdio.h>
int main()
{
    int code;
    int exp;
    int finalsalary = 0;
    int salary;
    scanf("%d",&code);
    scanf("%d",&exp);

    switch(code)
    {
        case 1:
        salary = 50000;
        if(exp>=3)
        {
            
           
            finalsalary = 5 * 5000 + salary; 
        }else
        {
            finalsalary = salary;
        }
        case 2:
        salary = 35000;
         if(exp>=3)
        {
            
           
            finalsalary = 5 * 5000 + salary; 
        }else
        {
            finalsalary = salary;
        }
    }
    printf("total salary = $%d",finalsalary);
}