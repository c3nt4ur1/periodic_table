/*
 * Created by ANBonin on 02/09/2022.
 * Copyright [2022] [c3nt4ur1@github.com]
 */

#ifndef PERIODIC_TABLE_PERIODIC_TABLE_H
#define PERIODIC_TABLE_PERIODIC_TABLE_H
#include "element.h"

//First period
Element Hydrogen(1, 1.00794, "H", 1, 1, "Hydrogen", 1, false, "1s1", false);
Element Helium(2, 4.002602, "He", 1, 18, "Helium", 2, false, "1s2", false);

//Second period
Element Lithium(3, 6.941, "Li", 2, 1, "Lithium", 1, true, "[He] 2s1", false);
Element Beryllium(4,  9.012182, "Be", 2, 2, "Beryllium", 2, true, "[He] 2s2", false);
Element Boron(5, 10.811, "B", 2, 13, "Boron", 3, false, "[He] 2s2 2p1", false);
Element Carbon(6, 12.0107, "C", 2, 14, "Carbon", 4, false, "[He] 2s2 2p2", false);
Element Nitrogen(7, 14.0067, "N", 2, 15, "Nitrogen", 5, false, "[He] 2s2 2p3", false);
Element Oxygen(8, 15.9994, "O", 2, 16, "Oxygen", 6, false, "[He] 2s2 2p4", false);
Element Fluorine(9, 18.9984032, "F", 2, 17, "Fluorine", 7, false, "[He] 2s2 2p5", false);
Element Neon(10, 20.1797, "Ne", 2, 18, "Neon", 8, false, "1s2 2s2 2p6", false);

//Third period
Element Sodium(11, 22.98976928, "Na", 3, 1, "Sodium", 1, true, "[Ne] 3s1", false);


#endif //PERIODIC_TABLE_PERIODIC_TABLE_H
