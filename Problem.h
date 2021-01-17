//
// Created by lucas on 01/16/2021.
//

#ifndef ONLINE_JUDGE_PROBLEM_H
#define ONLINE_JUDGE_PROBLEM_H

#include <iostream>
#include <string>

using namespace std;

class Problem {
public:
    Problem() = default;

    virtual void solve() = 0;

    virtual string getName() = 0;

    virtual int getNumber() = 0;

    virtual string getUrl() {
        string base_url = "https://www.urionlinejudge.com.br/judge/en/problems/view/";
        return base_url + to_string(getNumber());
    };
};

#endif //ONLINE_JUDGE_PROBLEM_H
