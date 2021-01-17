//
// Created by lucas on 01/16/2021.
//

#ifndef ONLINE_JUDGE_PROBLEMSLIST_H
#define ONLINE_JUDGE_PROBLEMSLIST_H


#include "Problem.h"
#include <map>

class ProblemsList {
public:
    ProblemsList() = default;

    virtual map<int, Problem *> list() = 0;
};


#endif //ONLINE_JUDGE_PROBLEMSLIST_H
