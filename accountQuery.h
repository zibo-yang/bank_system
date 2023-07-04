#ifndef accountQuery_h
#define accountQuery_h

#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::ios;
using std::fstream;
using std::ifstream;
using std::ofstream;

class AccountQuery{
    private:
        char m_accountNumber[20];
        char m_firstName[10];
        char m_lastName[10];
        float m_totalBalance;

    public:
        void readData();
        void showData();
        void writeRec();
        void readRec();
        void searchRec();
        void editRec();
        void deleteRec();
};

#endif