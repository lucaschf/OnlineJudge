//
// Created by lucas on 01/16/2021.
//

#ifndef ONLINE_JUDGE_BEGINNERPROBLEMSLIST_H
#define ONLINE_JUDGE_BEGINNERPROBLEMSLIST_H


#include "../ProblemsList.h"

class BeginnerProblemsList : public ProblemsList {
public:
    map<int, Problem *> list() override;
};


#endif //ONLINE_JUDGE_BEGINNERPROBLEMSLIST_H
