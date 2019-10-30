#include "user.h"


User::User(QObject *parent) : QObject (parent){

}



QString User::getName() const {
    return name;
}

void User::setName(const QString &value){
    name = value;
}

QString User::getCategory() const {
    return category;
}

double User::getMass() const {
    return mass;
}

void User::setMass(double value){
    mass = value;
}

double User::getHeight() const {
    return height;
}
void User::setHeight(double value){
    height = value;
}

double User::getBMI(){
    bmi = height != 0 ? mass / (height*height) : 0;

    if(bmi <= 15){
        category = "very severely underweight";
    }
    else if (bmi > 15 && bmi <= 16) {
        category = "Severely Underweight";
    }
    else if (bmi > 16 && bmi <= 18.5) {
        category = "Underweight";
    }
    else if (bmi > 18.5 && bmi <= 25) {
        category = "Normal/Healthy Weight";
    }
    else if (bmi > 25 && bmi <= 30) {
        category = "OverWeight";
    }
    else if (bmi > 30 && bmi <= 35) {
        category = "Obese I/mild obesity";
    }
    else if (bmi > 35 && bmi <= 40) {
        category = "Obese II/severely obesse";
    }
    else {
        category = "Obese III/ very severly obesse";
    }

    return bmi;
}

