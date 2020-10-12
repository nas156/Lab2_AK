#include <iostream>
#include "calculator.h"

using namespace std;

int main(){
    Calculator calculator = Calculator();
    cout << calculator.Add(2, 2) << endl;
    return 0;
}