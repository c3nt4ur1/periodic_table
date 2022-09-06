/*
 * Created by ANBonin on 02/09/2022.
 * Copyright [2022] [c3nt4ur1@github.com]
 */

#ifndef PERIODIC_TABLE_ELEMENT_H
#define PERIODIC_TABLE_ELEMENT_H
#include <iostream>
using namespace std;

class Element{
public:
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
    const char* electronic_distribution;
    const char* classification;
    int charge;

    Element(int n, float mass, const char* symbol, int period, int group, const char* name, int valence, bool is_metal, const char* distribution, bool radioactive, int charge) {
        this->atomic_number = n;
        this->mass = mass;
        this->symbol = symbol;
        this->period = period;
        this->group = group;
        this->name = name;
        this->valence_layer = valence;
        this->is_metal = is_metal;
        this->electronic_distribution = distribution;
        this->radioactive = radioactive;
        this->charge = charge;

        switch (group) {
            case 1:
                this->family = "1A";
                if(this->atomic_number != 1){ //Creates exception for Hydrogen
                    this->classification = "Alkali Metals";
                }else{
                    this->classification = "Nonmetals";
                }
            case 2:
                this->family = "2A";
                this->classification = "Alkali-earth Metals";
            case 3:
                this->family = "3B";
                this->classification = "Transition Metals";
            case 4:
                this->family = "4B";
                this->classification = "Transition Metals";
            case 5:
                this->family = "5B";
                this->classification = "Transition Metals";
            case 6:
                this->family = "6B";
                this->classification = "Transition Metals";
            case 7:
                this->family = "7B";
                this->classification = "Transition Metals";
            case 8:
                this->family = "8B";
                this->classification = "Transition Metals";
            case 9:
                this->family = "8B";
                this->classification = "Transition Metals";
            case 10:
                this->family = "8B";
                this->classification = "Transition Metals";
            case 11:
                this->family = "1B";
                this->classification = "Transition Metals";
            case 12:
                this->family = "2B";
                this->classification = "Transition Metals";
            case 13:
                this->family = "3A";
                this->classification = "Boron Family";
            case 14:
                this->family = "4A";
                this->classification = "Carbon Family";
            case 15:
                this->family = "5A";
                this->classification = "Nitrogen Family";
            case 16:
                this->family = "6A";
                this->classification = "Chalcogen"; //Not a typo
            case 17:
                this->family = "7A";
                this->classification = "Halogens";
            case 18:
                this->family = "8A";
                this->classification = "Noble Gases";
            default:
                this->family = "UNK";
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
    ~Element(){
        delete this;
    }
};

#endif //PERIODIC_TABLE_ELEMENT_H
