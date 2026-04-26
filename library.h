#include <iostream>
#include <string>

class PatientVitals {
private:
    std::string patientName;
    int heartRate;
    double bodyTemp;
    bool isStable;

public:
    PatientVitals() {
        patientName = "Unknown";
        heartRate = 72;
        bodyTemp = 37.0;
        isStable = true;
    }
    PatientVitals(std::string name, int hr, double temp) {
        patientName = name;
        heartRate = hr;
        bodyTemp = temp;
        checkStability();
    }
    void updateVitals(int hr) {
        this->heartRate = hr;
        checkStability();
    }

    void updateVitals(int hr, double temp) {
        this->heartRate = hr;
        this->bodyTemp = temp;
        checkStability();
    }

    void checkStability() {
        if (heartRate > 100 || heartRate < 60 || bodyTemp > 38.0) {
            isStable = false;
        } else {
            isStable = true;
        }
    }
    PatientVitals operator+(const PatientVitals& other) {
        return PatientVitals("Merged Record", 
                             (this->heartRate + other.heartRate) / 2, 
                             (this->bodyTemp + other.bodyTemp) / 2.0);
    }
    int operator-(const PatientVitals& other) {
        return std::abs(this->heartRate - other.heartRate);
    }
    bool operator==(const PatientVitals& other) const {
        return (this->isStable == other.isStable);
    }
    friend std::ostream& operator<<(std::ostream& os, const PatientVitals& p) {
        os << "Patient: " << p.patientName 
           << " | HR: " << p.heartRate 
           << " | Temp: " << p.bodyTemp << "C"
           << " | Status: " << (p.isStable ? "Stable" : "CRITICAL");
        return os;
    }
};