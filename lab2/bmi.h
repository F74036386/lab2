#ifndef BMI_H
#define BMI_H
#include<string>
using namespace std;
class BMI{

        public:
                void setmass(double num);
                void sethigh(double num);
                double getmass();
                double gethigh();
                double bmivalue();
                string category(double bmi);


        private:
                double mass;
                double high;
};

#endif
