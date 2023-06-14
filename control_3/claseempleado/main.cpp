#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include <iostream>
#include <vector>

int main(){
    CommissionEmployee e ("jose",1000,0.5);
    BasePlusCommissionEmployee a ("Maria", 1000, 0.5, 2000);
    CommissionEmployee *ptr = new CommissionEmployee("pepe",500,0.1);
    BasePlusCommissionEmployee *ptr2 = new BasePlusCommissionEmployee("marco",500,0.5,2000);

    std :: vector<CommissionEmployee*> vec;
    vec.push_back(&e);
    vec.push_back(&a);
    vec.push_back(ptr);
    vec.push_back(ptr2);

    delete ptr;
    delete ptr2;
    for(int i = 0; i < vec.size(); ++i){
        std::cout<<vec[i]->toString();
    }

}