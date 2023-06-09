#ifndef __FILE_H__
#define __FILE_H__
#include<string>
#include<iostream>
#include<io.h>
#include<direct.h>
using std::string;
void mk_dir(const string& path) {
    if (_access(path.c_str(), 0) == -1) {

        _mkdir(path.c_str());
        std::cout << path << " create! " << std::endl;
    }
    else {
        //rmdir(path.c_str());
        _mkdir(path.c_str());
        std::cout << path << " recover create! " << std::endl;
    }
}
double read_dat(string fname,int src)
{
    int dsize = 8;
    std::ifstream in(fname, std::ios::binary);
    double num = 0.0;
    in.seekg((src)* dsize);
    in.read((char*)&num, dsize);
    return num;
}
#endif // !__FILE_H__

