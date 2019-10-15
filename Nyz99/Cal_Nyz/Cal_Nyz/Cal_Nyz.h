#pragma once
#include "pch.h"
#include <stack>
#include <vector>
#include <iostream>
#include "stdlib.h"
#include <ctime>
#include <string>  
using namespace std;

class Cal_Nyz {
private:
	string op[4] = { "+", "-", "*", "/" };
public:
	Cal_Nyz();
	string MakeFormula();
	string Solve(string formula);
};
