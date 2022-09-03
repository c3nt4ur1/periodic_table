/*
 * Created by ANBonin on 02/09/2022.
 * Copyright [2022] [c3nt4ur1@github.com]
 */

#ifndef PERIODIC_TABLE_ELEMENT_H
#define PERIODIC_TABLE_ELEMENT_H
#include <iostream>
using namespace std;

class Element{
protected:
    int atomic_number;
    float mass;
    const char* symbol;
    int period;
    int group;
    const char* family;
    const char* name;
    int valence_layer;
    bool is_metal;
    bool la = false;
    bool ac = false;
    bool radioactive;
    string electronic_distribution;

public:
    Element(int n, float mass, const char* symbol, int period, int group, const char * name, int valence, bool is_metal, string* distribution, bool radioactive){
        this-> atomic_number = n;
        this-> mass = mass;
        this-> symbol = symbol;
        this->period = period;
        this->group = group;
        this->name = name;
        this->valence_layer = valence;
        this->is_metal = is_metal;
        this->electronic_distribution = *distribution;
        this->radioactive = radioactive;

        switch (group) {
            case 1:
                this->family = "1A";
            case 2:
                this->family = "2A";
            case 3:
                this->family = "3B";
            case 4:
                this->family = "4B";
            case 5:
                this->family = "5B";
            case 6:
                this->family = "6B";
            case 7:
                this->family = "7B";
            case 8:
                this->family = "8B";
            case 9:
                this->family = "8B";
            case 10:
                this->family = "8B";
            case 11:
                this->family = "1B";
            case 12:
                this->family = "2B";
            case 13:
                this->family = "3A";
            case 14:
                this->family = "4A";
            case 15:
                this->family = "5A";
            case 16:
                this->family = "6A";
            case 17:
                this->family = "7A";
            case 18:
                this->family = "8A";
        }
        if(is_metal){
            if(group == 3){
                if(period == 6){
                    this->la = true;
                }
                if(period == 7){
                    this->ac = true;
                }
            }
        }
    }
};

#endif //PERIODIC_TABLE_ELEMENT_H
