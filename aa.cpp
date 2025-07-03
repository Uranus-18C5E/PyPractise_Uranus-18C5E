#include<iostream>
int main()
{
    int a=100;
    //std::cout<<h<<' '<<t<<' '<<o<<"\n";
    while (a<1000)
    {
        int h=int(a/100);
        int o=int(a%10);
        int t=int(a/10-h*10);
        if (h*h*h+t*t*t+o*o*o==a)
        {
            std::cout<<a<<std::endl;
        }
        a++;
    }
    return 0;
}