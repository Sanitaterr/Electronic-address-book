#pragma once

#include"JZY.Contact_Person.h"

class address_book :public JZY_Contact_Person
{
public:
    address_book()
    {
        cout << "********************************************************" << endl;
        cout << "********************************************************" << endl;
        cout << "----------��ӭ���� ����ͨѶ¼ϵͳ 1.1 ----------" << endl;
        cout << "----------����֧�ְ�ָ����ϵ���������ҹ���" << endl;
        cout << endl;
    }

    //�˵�չʾ
    void EAB_menu();

    //¼��ָ���û���Ϣ
    void EAB_Person_information_initialization();

    //չʾָ���û���Ϣ
    void EAB_show(int idx);
    //չʾ�����û���Ϣ
    void EAB_show();

    //ɾ��ָ����ϵ����Ϣ
    void EAB_Person_information_delete();

    //��������
    int EAB_Person_name_find();

    //�޸���ϵ����Ϣ
    void EAB_Person_modifying_contact_information();

    //���ͨѶ¼
    void EAB_Person_clear();

    //�ļ���ȡ
    void EAB_file_open();

    //��Ϣ���뺯��
    void EAB_file_information_import(string JZY_Contact_Person_name, string JZY_Contact_Person_phonenumber, string JZY_Contact_Person_email, string JZY_Contact_Person_stress, string JZY_Contact_Person_job, string JZY_Contact_Person_carrier_company);

    //�ļ�����
    void EAB_file_push();

    //�˳�����
    void EAB_quit();

    //����
    ~address_book()
    {
        cout << "----------�ɹ��˳�ϵͳ����л����ʹ�ã�----------" << endl;
    }

private:
    //JZY_Contact_Person Person[5];
    vector<JZY_Contact_Person>Person;
};