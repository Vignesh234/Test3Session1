#include<stdio.h>
int main()
{
    
    int numerator1, denominator1, numerator2, denominator2, x, y, c, gcd_no;
    
    
    printf("Enter the numerator for 1st number   : ");
    scanf("%d",&numerator1);
    printf("Enter the denominator for 1st number : ");
    scanf("%d",&denominator1);
    printf("Enter the numerator for 2nd number   : ");
    scanf("%d",&numerator2);
    printf("Enter the denominator for 2nd number : ");
    scanf("%d",&denominator2);
    
    
    x=(numerator1*denominator2)+(denominator1*numerator2); 
    
    
    y=denominator1*denominator2; 
    
	
    for(c=1; c <= x && c <= y; ++c)
    {
       if(x%c==0 && y%c==0)
          gcd_no = c;
    }
    
    
    printf("(%d / %d) + (%d / %d) = (%d / %d)", numerator1, denominator1, numerator2, denominator2, x/gcd_no, y/gcd_no);
    
    return 0;
}
