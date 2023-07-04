#include "accountQuery.h"

int main(){

    AccountQuery A;

    cout << "****Account Information System*****" << endl;

    while (true){
        
        cout << "Select one option below";
		cout << "\n\t1-->Add record to file";
		cout << "\n\t2-->Show record from file";
		cout << "\n\t3-->Search record from file";
		cout << "\n\t4-->Update record";
		cout << "\n\t5-->Delete record";
		cout << "\n\t6-->Quit";	
		cout << "\nEnter your choice: ";

        int choice;
        cin >> choice;
        switch (choice){
            case 1:
                A.writeRec();
                break;
            case 2:
                A.readRec();
                break;
            case 3:
                A.searchRec();
                break;
            case 4:
                A.editRec();
                break;
            case 5:
                A.deleteRec();
                break;
            case 6:
                return 0;
                break;
            default:
                cout << "Please Enter Correct Choice" << endl;
        }
    }
    return 0;
}