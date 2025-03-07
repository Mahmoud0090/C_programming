#include <stdio.h>


void func(int x)
{
    printf("the value of x is %d\n" , x);
}

double add(double x , double y)
{
    return x + y;
}

double subsract(double x , double y)
{
    return x - y;
}

double divide(double x , double y)
{
    return x/y;
}

int main()
{
    void (*func_ptr)(int);
    
    func_ptr = &func;
    
    (*func_ptr)(6);
    
    double (*func_add)(double , double) = &add; // we can assign here directly
    
    //func_add = &add; 
    //double y = (*func_add)(3.4,56.7);
    
    //we can also do without derefrencing the pointer 
    double res = func_add(3.4,56.7);
    
    printf("the value of y is %.2f\n" , res);
    
    //declaring an array of pointer to functions
    
    double (*array[3])(double , double) = {add , subsract , divide};
    
    double x = 32.4;
    double y = 65.6;
    
    double sum = array[0](x ,y); // also (*array[0])(x,y) works
    double subs = array[1](x , y);
    double division = array[2](x , y);
    
    printf("the sum result of %.2f + %.2f is %.2f\n" , x , y , sum);
    printf("the substract result of %.2f - %.2f is %.2f\n" , x , y , subs);
    printf("the division result of %.2f / %.2f is %.2f\n" , x , y , division);
    
    return 0;
}