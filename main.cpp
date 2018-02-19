#include <iostream>
#include <cmath>
#include "beta.h"

int main() {
    std::cout << "Beta functions generating program" << std::endl;

    double a, b;
    std::cout << "Enter first parameter (0-10): ";
    std::cin >> a;
    std::cout << "Enter second parameter (0-10): ";
    std::cin >> b;

    return 0;
}

void betaIntegral(){

}

void betaVelocity(){

}


void calcNormalizingConstant(const double a, const double b){
    double numerator = pow(a, a) * pow(b, b);
    double denominator = pow( (a+b), (a+b));

    // Normaliztion constant for amplitudes with beta functions.
    double betaCon = numerator / denominator;
}

void filterUnacceptableValues(const double a, const double b){
    if (a < 0 || b < 0){
        throw std::string("Check that constants are >= 0");
    }
    if (a + b <= 0){
        throw std::string("a + b must be > 0");
    }
    if (a + b > 10){
        throw std::string("a + b must be <= 10");
    }
}

void plotFunctionOnScreen(){

}

void computeBeta(){
    //std::beta();
}


double applyMultiplicationFactor(double integral, const double k){
    return integral * k;
}


void askParams(){

}