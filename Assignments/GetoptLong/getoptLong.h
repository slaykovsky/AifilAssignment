//
// Created by Alexey Slaykovsky on 25/12/15.
//

#ifndef AIFILASSIGNMENT_GETOPTLONG_H
#define AIFILASSIGNMENT_GETOPTLONG_H

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

typedef std::map<std::string, bool> options_t;

// vos == Vector of strings :)
typedef std::vector<std::string> vos;

vos &split(const std::string &s, char delim, std::vector<std::string> &elems);

vos split(const std::string &s, char delim);

options_t generate_options();

typedef std::vector<std::map<int, bool>>::iterator iterator;

std::string get_help_message(std::string file_name, options_t options);

std::string get_value(std::string name, vos argv);

std::string getopts_long(vos argv, options_t options);

#endif //AIFILASSIGNMENT_GETOPTLONG_H
