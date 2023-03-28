
#include"JZY.Contact_Person.h"
#include"address_book.h"
#define ios ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

int main()
{
    ios;
    
    address_book EAB;

    EAB.EAB_file_open();
    
    while (1) {
        EAB.EAB_menu();

        int choose;
        char a;
        cin >> choose; a = getchar();
        if (choose == 0) {
            EAB.EAB_file_push();

            EAB.EAB_quit();

            break;
        }
        else if(choose<0||choose>=10) {
            cout << "输入有误，请重新输入！" << endl;
            continue;
        }

        switch (choose)
        {
        case 1: {
            EAB.EAB_Person_information_initialization(); 
            break;
        }
        case 2: {
            EAB.EAB_show(); 
            break;
        }
        case 3: {
            EAB.EAB_show(0);
            break;
        }
        case 4: {
            EAB.EAB_Person_information_delete(); 
            break;
        }
        case 5: {
            EAB.EAB_Person_modifying_contact_information();
            break;
        }
        case 9: {
            EAB.EAB_Person_clear();
            break;
        }
        /*case 5: {
            EAB.EAB_Person_name_find();
            break;
        }*/

        /*default:
            break;*/
        }
    }

    //system("pause");
    return 0;
}