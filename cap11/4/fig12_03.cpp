#include <string>
#include "CommissionEmployee.h"

#include "BasePlusCommissionEmployee.h"

using namespace std;

int main(){
    BasePlusCommissionEmployee basePlusCommissionEmployee{"Bob", "Lewis", "333-33-3333", 5000, .04, 300};

    CommissionEmployee* commissionEmployeePtr{&basePlusCommissionEmployee};
    //BasePlusCommissionEmployee* basPtr{&commissionEmployee};

    string firstName {commissionEmployeePtr->getFirstName()};
    string lastName{commissionEmployeePtr->getLastName()};
    string ssn{commissionEmployeePtr->getSocialSecurityNumber()};
    double grossSales{commissionEmployeePtr->getGrossSales()};
    double commissionRate{commissionEmployeePtr->getCommissionRate()};

    double baseSalary{commissionEmployeePtr->getBaseSalary()};
    commissionEmployeePtr->setBaseSalary(500);



    }
