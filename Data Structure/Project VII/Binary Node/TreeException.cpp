#include<iostream>
#include<string>
using namespace std;
/** @file PrecondViolatedExcep.cpp */ 
#include "TreeException.h"


TreeException ::TreeException(const string& message) :
	logic_error("Precondition Violated Exception: " + message){ }