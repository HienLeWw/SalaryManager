

#include "Company.h"

int main()
{
    Company DUT;
    DUT.input();
    DUT.output();
    DUT.setAvgSalary();
    cout << "Average Salary: "<<DUT.getAvgSalary()<<"\n";
    DUT.belowAvgSalary();

    return 0;
}

