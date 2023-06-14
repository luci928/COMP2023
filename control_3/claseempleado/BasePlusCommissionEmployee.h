#ifndef BASEPLUS_H
#define BASEPLUS_H
#include <sstream>
#include <string>
#include "CommissionEmployee.h"

class BasePlusCommissionEmployee : public CommissionEmployee{
    public:
        BasePlusCommissionEmployee(const std::string&,double =0.0,double=0.0,double=0.0);
        void setBaseSalary(double);
        double getBaseSalary()const;

        virtual double earnings()const override;
        virtual std::string toString() const override;
    private:
        double baseSalary;
};

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
    const std::string& first,const double sales, double rate, double salary):
    CommissionEmployee(first,sales,rate){
        setBaseSalary(salary);}

void BasePlusCommissionEmployee::setBaseSalary(double salary){
    if(salary < 0.0){
        throw std::invalid_argument("Salary must be >=0.0");
    }
    baseSalary = salary;
}

double BasePlusCommissionEmployee::getBaseSalary()const {
    return baseSalary;
}

double BasePlusCommissionEmployee::earnings()const {
    return baseSalary+CommissionEmployee::earnings();
}

std::string BasePlusCommissionEmployee::toString()const{
    std::ostringstream output;
    output <<std::fixed<<std::setprecision(2);
    output <<"\nbase-salaried commission employee: "<<firstName<< ' '<<
    "\ngross sales: "<<grossSales<< "\ncommission rate: "<<commissionRate<<"\nbase salary: "<<baseSalary;
    return output.str(); 
}

#endif
