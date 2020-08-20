#ifndef ERRORMSG_H
#define ERRORMSG_H

#include <string>

class ErrorMsg{
public:
    bool anyErrors;
    std::string filename;

    ErrorMsg(std::string afilename);

    void error(int row, int col, std::string msg);

    void warning(int row, int col, std::string msg);

    void info(std::string s);

    std::string lineAndChar(int row, int col);
};

#endif