#include <iostream> 
#include <cmath>


using namespace std;

int main(){
    int sales = 95000;
    cout << sales << endl;

    const double stateTaxRate = 4.0/100;
    double stateTax = sales * stateTaxRate;
    cout << "sales tax paid:" <<  stateTax << endl;

    const double countyTaxRate = 2.0/100;
    double countyTax = sales * countyTaxRate;
    cout << "county tax paid:" << countyTax << endl;

    double totalTax = stateTax + countyTax;
    cout << "total tax paid:" << totalTax << endl;

    cout << ceil(3.5) << endl; // this ceil function rounds up a float

    cout << floor(3.5) << endl; // floor rounds down a float

    double result = pow(2, 3);
     
    cout << result << endl; 

    return 0;
}