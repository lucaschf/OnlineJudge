//
// Created by lucas on 01/16/2021.
//

#ifndef ONLINE_JUDGE_PROBLEM_H
#define ONLINE_JUDGE_PROBLEM_H

#include <iostream>

using namespace std;

class Problem {
public:
    Problem() = default;

    virtual void solve() = 0;

    virtual string getName() = 0;
};

#endif //ONLINE_JUDGE_PROBLEM_H
