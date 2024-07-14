#include <iostream>
#include <string>

int main() {
    int num;
    int data,data1;
    std::cin>>num;
    
    for(int i = 0;i<num;i++)
    {
        std::cin>>data;
        if(data == 3)
        {
            data1 = 3;
           std:: cout<<data1<<std::endl;
        }
        else
        {
            data1 = 2;
            std:: cout<<data1<<std::endl;
        }
    }

    return 0;
}
