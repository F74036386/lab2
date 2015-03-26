#include<string>
#include"bmi.h"
void BMI::setmass(double num){
        mass=num;
}
void BMI::sethigh(double num){
        high=num;
}
double BMI:: getmass(){
        return mass;
}
double BMI::gethigh(){
        return high;
}

double BMI::bmivalue(){
        return high==0?0: mass/(high*high);

}
string BMI::category(double bmi){
if(bmi==0) return" ";
        if(bmi<15.0)return "Very severely underweight";
        else if(bmi<16.0)return "Severely underweight";
        else if(bmi<18.5)return "Underweight ";
        else if(bmi<25.0)return "Normal";
        else if(bmi<30.0)return "Overweight ";
        else if(bmi<35.0)return "Obese Class I (Moderately obese) ";
        else if(bmi<40.0)return "Obese Class II (Severely obese)";
        else return "Obese Class III (Very severely obese) ";
}




