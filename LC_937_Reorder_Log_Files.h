//
// Created by sai srinivas lakkakula on 6/29/21.
//

#ifndef LETTCODE_LC_937_REORDER_LOG_FILES_H
#define LETTCODE_LC_937_REORDER_LOG_FILES_H
#include <string>
#include <vector>
#include <map>
#include <iostream>
#include <algorithm>
using std::sort;
using std::vector;
using std::string;
using std::map;
vector<string> reorderLogFiles(vector<string>& logs);
bool cmp(std::pair<string, int>& a,
         std::pair<string, int>& b);
#endif //LETTCODE_LC_937_REORDER_LOG_FILES_H
