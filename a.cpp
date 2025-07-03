#include <iostream>
#include<string>
int main(){
    int num[]={};

    std::string name[]={};
    std::cout<<"__________________________________________________________________\n";
    int num_t=0;
    std::string name_t="1";

    for(int i=0;i<132;i++){
        for(int j=0;j<131;j++){
            if(num[j]>num[j+1]){
                num_t=num[j];
                num[j]=num[j+1];
                num[j+1]=num_t;
                name_t=name[j];
                name[j]=name[j+1];
                name[j+1]=name_t;
            }
        }
    }
        system("cls");
    for(int p=0;p<5;p++){
        std::cout<<name[p]<<std::endl;
    }
    return 0;
}