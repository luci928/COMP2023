#ifndef COMMISSION_H
#define COMMISSION_H

#include <iomanip>
#include <stdexcept>
#include <sstream>

class CommissionEmployee{
    public:
        CommissionEmployee(const std :: string&, double = 0.0, double = 0.0);

        void setFirstName(const std :: string&);
        std :: string getFirstName() const;

        void setGrossSales(double);
        double getGrossSales() const;

        void setCommissionRate(double);
        double getCommissionRate() const;

        virtual double earnings() const;
        virtual std :: string toString() const;

    protected:
        std :: string firstName;
        double grossSales;
        double commissionRate;

};

CommissionEmployee :: CommissionEmployee(const std:: string& first, double sales, double rate) : firstName(first){
    setGrossSales(sales);
    setCommissionRate(rate);
}

void CommissionEmployee :: setFirstName(const std :: string& first){
    firstName = first;
}

std :: string CommissionEmployee :: getFirstName() const{
    return firstName;
}

void CommissionEmployee :: setGrossSales(double sales){
    if(sales < 0.0){
        throw std :: invalid_argument("Gross sales must be >= 0.0");
    }
    grossSales = sales;
}

double CommissionEmployee :: getGrossSales() const{
    return grossSales;
}

void CommissionEmployee :: setCommissionRate(double rate){
    if(rate <= 0.0 || rate >= 1.0){
        throw std :: invalid_argument("Comission rate must be > 0.0 and < 1.0");
    }
    commissionRate = rate;
}

double CommissionEmployee :: getCommissionRate() const{
    return commissionRate;
}

double CommissionEmployee :: earnings() const{
    return getCommissionRate() * getGrossSales();
}

std :: string CommissionEmployee :: toString() const{
    std :: ostringstream output;
    output << std :: fixed << std::setprecision(2);
    output << "commission employee: " << getFirstName()
        << "\ngross sales: " << getGrossSales()
        << "\ncomission rate: " << getCommissionRate();

    return output.str();
}




#endif