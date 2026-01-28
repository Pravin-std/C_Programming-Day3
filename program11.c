#include <stdio.h>
int main()
{
    int plantype;
    float data;
    scanf("%d",&plantype);
    scanf("%f",&data);

    switch(plantype)
    {
        case 1:
        if(data <=1.0)
        {
            printf("Normal Speed");
        }else
        {
            printf("speed Reduced");
        }
        break;

        case 2:
        if(data<=2.0)
        {
            printf("Normal Speed");
        }else{
            printf("Extra Charges Applied");
        }
        break;
    }
}