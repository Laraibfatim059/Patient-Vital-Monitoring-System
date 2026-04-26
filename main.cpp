#include <iostream>
#include "PatientLibrary.h"

int main() {
   
    PatientVitals p1; 
    PatientVitals p2("Ahmed", 110, 39.5); 
    
    std::cout << "Initial Vitals:" << std::endl;
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;

    p1.updateVitals(80, 36.8);
    std::cout << "\nAfter Updating P1:" << std::endl;
    std::cout << p1 << std::endl;

    std::cout << "\nOperator Testing:" << std::endl;
    
    PatientVitals combined = p1 + p2;
    std::cout << "Combined Average: " << combined << std::endl;

    int hrDiff = p1 - p2;
    std::cout << "Heart Rate Difference: " << hrDiff << " bpm" << std::endl;

    if (p1 == p2) {
        std::cout << "Both patients have same stability status." << std::endl;
    } else {
        std::cout << "Stability status differs." << std::endl;
    }

    return 0;
}