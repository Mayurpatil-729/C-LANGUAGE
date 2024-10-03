#include<stdio.h>

// For ( x - y2 )
float f ( float x, float y)
{
    float z;
    z=x-y*y;
    return z;
}


void main()
{
    float h,x0,y0,xn,n,k1,k2,k3,k4,x1,x2,x3,y,y1,y2,y3,z;
    int i=1;

    printf("Enter x0 :\n" );
    scanf("%f", &x0);
    printf("Enter y0 :\n");
    scanf("%f", &y0);
    printf("Enter h :\n");
    scanf("%f", &h);
    printf("Enter xn :\n");
    scanf("%f", &xn);



    while ( x0 < xn)
    {
        printf("\n\nStep %d:",i);
        printf("\n\nx%d= %f",i-1,x0);
        
        k1 = h * f( x0, y0);
        printf("\n\n\tk1=%f",k1);
        
        x1= x0+( h/2 );
        y1 = y0 +( k1/2 );
        k2 = h * f( x1,y1 ); 
        printf("\n\tk2=%f",k2);
    
        x2 = x1;
        y2 = y0 +( k2/2 );
        k3 = h * f( x2,y2 );    
        printf("\n\tk3=%f",k3);
    
        x3 = x1 + ( h/2);
        y3 = y0 +( k3 );
        k4 = h * f( x3,y3 );
        printf("\n\tk4=%f",k4);
    
    
        y0 = y0 + 0.166*( k1 + 2*k2 + 2*k3 +k4 );
        
        printf("\n\n\t==> y%d = %f",i,y0);
        

        x0=x0+h;
        i++;
    }
    
}