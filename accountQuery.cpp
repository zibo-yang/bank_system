#include "accountQuery.h"

/*
void readData();
        void showData();
        void writeRec();
        void readRec();
        void searchRec();
        void editRec();
        void deleteRec();
*/

void AccountQuery::readData(){
    cout << "\nEnter Account Number:";
    cin >> m_accountNumber;
    cout << "Enter First Name:";
    cin >> m_firstName;
    cout << "Enter Last Name:";
    cin >> m_lastName;
    cout << "Enter Balance:";
    cin >> m_totalBalance;
}

void AccountQuery::showData(){
    cout << "Account Number:" << m_accountNumber << endl;
    cout << "First Name:" << m_firstName << endl;
    cout << "Last Name:" << m_lastName << endl;
    cout << "Balance" << m_totalBalance << endl;
}

void AccountQuery::writeRec(){
    ofstream ofs;
    ofs.open("record.bank", ios::out|ios::app);
    readData();
    ofs.write(reinterpret_cast<char *>(this), sizeof(*this));
    ofs.close();
}

void AccountQuery::readRec(){
    ifstream ifs;
    ifs.open("record.bank", ios::in|ios::binary);

    if(!ifs.is_open()){
        cout << "Error in Opening!" << endl;
        return;
    }

    cout << "\n*****Data from file*****"<< endl;

    while (!ifs.eof()){
        if(ifs.read(reinterpret_cast<char *>(this), sizeof(*this))){
            showData();
        }
    }
    
    ifs.close();
}

void AccountQuery::searchRec(){
    int n;
    ifstream ifs;
    ifs.open("record.bank", ios::in|ios::binary);

    if(!ifs.is_open()){
        cout << "Error in Opening!" << endl;
        return;
    }

    ifs.seekg(0, ios::end);
    int count = (int)ifs.tellg()/sizeof(*this);
    cout << "\nThere are " << count << " record in the file" << endl;
    cout << "\n Enter Record Number to Search:";
    cin >> n;

    ifs.seekg((n - 1) * sizeof(*this));
    ifs.read(reinterpret_cast<char *>(this), sizeof(*this));
    showData();

    ifs.close();
}

void AccountQuery::editRec(){
    int n;
    fstream iofs;
    iofs.open("record.bank", ios::in|ios::out|ios::binary);

    if(!iofs.is_open()){
        cout << "Error in Opening!" << endl;
        return;
    }

    iofs.seekg(0, ios::end);
    int count = (int)iofs.tellg()/sizeof(*this);
    cout << "\nThere are " << count << " record in the file" << endl;
    cout << "\n Enter Record Number to Search:";
    cin >> n;

    iofs.seekg((n - 1) * sizeof(*this));
    iofs.read(reinterpret_cast<char *>(this), sizeof(*this));
    cout << "Record " << n << " has following data" << endl;
    showData();

    cout << "******Enter the data you want to edit*****" << endl;
    readData();
    
    iofs.seekp((n - 1) * sizeof(*this));
    iofs.write(reinterpret_cast<char *>(this), sizeof(*this));
    
    iofs.close();
}

void AccountQuery::deleteRec(){
    int n;
    ifstream ifs;
    ifs.open("record.bank", ios::in|ios::binary);
    if (!ifs.is_open()){
        cout << "Error in Opening" << endl;
        return;
    }

    ifs.seekg(0, ios::end);
    int count = (int)ifs.tellg()/sizeof(*this);
    cout << "\n There are "<< count <<" records in the file" <<endl;
    cout << "\n Entern Record Number to delete" << endl;
    cin >> n;

    ofstream tmpfile;
    tmpfile.open("tmpfile.bank", ios::out|ios::binary);

    ifs.seekg(0, ios::beg);
    for(int i = 0; i < count; i++){
        ifs.read(reinterpret_cast<char *>(this), sizeof(*this));
        if (i == n - 1) continue;
        tmpfile.write(reinterpret_cast<char *>(this), sizeof(*this));
    }

    ifs.close();
    tmpfile.close();

    remove("record.bank");
    rename("tmpfile.bank", "record.bank");
}


// int main() {
//     AccountQuery A;
//     //A.writeRec();
//     A.readRec();
//     A.deleteRec();
//     A.readRec();
//     return 0;
// }