/**
    @file h09.h
    @author
    @version
*/
#ifndef H09_H_
#define H09_H_
#include <string>

bool read(const std::string& prompt, int& n, bool ln=false);
bool read(const std::string& prompt, double& n, bool ln=false);
bool read(const std::string& prompt, std::string& s, bool ln=false);
bool read(char& c, char sentinel);

#endif
