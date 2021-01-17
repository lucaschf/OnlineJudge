//
// Created by lucas on 01/17/2021.
//

#include "Problem1049.h"

#include <map>

string get_animal(const string &classification, const string &animal_kingdom, const string &group);

void Problem1049::solve() {
    string classification;
    string animal_kingdom;
    string group;

    cin >> classification;
    cin >> animal_kingdom;
    cin >> group;

    cout << get_animal(classification, animal_kingdom, group) << endl;
}

string get_animal(const string &classification, const string &animal_kingdom, const string &group) {

    map<string, map<string, string>> vertebrates = {
            {"ave",      {
                                 {"carnivoro", "aguia"},
                                 {"onivoro",   "pomba"}}
            },
            {"mamifero", {
                                 {"onivoro",   "homem"},
                                 {"herbivoro", "vaca"}}
            }
    };

    map<string, map<string, string>> invertebrates = {
            {"inseto",   {
                                 {"hematofago", "pulga"},
                                 {"herbivoro", "lagarta"}}
            },
            {"anelideo", {
                                 {"hematofago", "sanguessuga"},
                                 {"onivoro",   "minhoca"}}
            }
    };

    map<string, map<string, string>> target = classification == "vertebrado" ? vertebrates : invertebrates;

    return target.find(animal_kingdom)->second.find(group)->second;
}

string Problem1049::getName() {
    return "Animal";
}

int Problem1049::getNumber() {
    return 1049;
}
