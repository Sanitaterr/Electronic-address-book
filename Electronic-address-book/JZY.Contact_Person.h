#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define filename "Person.txt"
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

class JZY_Contact_Person
{
public:
    //�޲ι���
	JZY_Contact_Person()
	{
		this->JZY_Contact_Person_name = "����Ϣ";
		this->JZY_Contact_Person_phonenumber = "����Ϣ";
		this->JZY_Contact_Person_email = "����Ϣ";
		this->JZY_Contact_Person_stress = "����Ϣ";
		this->JZY_Contact_Person_job = "����Ϣ";
		this->JZY_Contact_Person_carrier_company = "����Ϣ";
    }

    //��������
    JZY_Contact_Person(string JZY_Contact_Person_name, string JZY_Contact_Person_phonenumber, string JZY_Contact_Person_email, string JZY_Contact_Person_stress, string JZY_Contact_Person_job, string JZY_Contact_Person_carrier_company)
    {
        this->JZY_Contact_Person_name = JZY_Contact_Person_name;
        this->JZY_Contact_Person_phonenumber = JZY_Contact_Person_phonenumber;
        this->JZY_Contact_Person_email = JZY_Contact_Person_email;
        this->JZY_Contact_Person_stress = JZY_Contact_Person_stress;
        this->JZY_Contact_Person_job = JZY_Contact_Person_job;
        this->JZY_Contact_Person_carrier_company = JZY_Contact_Person_carrier_company;

        //cout << "����������óɹ�" << endl;
    }

    //��ʼ����˵�
    void JZY_Contact_menu();

    //��Ϣ¼��
    void JZY_Contact_information_initialization(string JZY_Contact_Person_name, string JZY_Contact_Person_phonenumber, string JZY_Contact_Person_email, string JZY_Contact_Person_stress, string JZY_Contact_Person_job, string JZY_Contact_Person_carrier_company);
    void JZY_Contact_information_initialization(JZY_Contact_Person& P);

    //չʾ��ϵ����Ϣ
    void JZY_Contact_show(JZY_Contact_Person &Person);

    //��Ա��������
    string JZY_Contact_name_out();
    string JZY_Contact_phonenumber_out();
    string JZY_Contact_email_out();
    string JZY_Contact_stress_out();
    string JZY_Contact_job_out();
    string JZY_Contact_carrier_company_out();

    ~JZY_Contact_Person() 
    {
        //cout << "�����������óɹ�" << endl;
    }

private:
    string JZY_Contact_Person_name;//����
    string JZY_Contact_Person_phonenumber;//�绰
    string JZY_Contact_Person_email;//����
    string JZY_Contact_Person_stress;//סַ
    string JZY_Contact_Person_job;//ְҵ
    string JZY_Contact_Person_carrier_company;//��˾
};