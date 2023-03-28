#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#define filename "Person.txt"
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

class JZY_Contact_Person
{
public:
    //无参构造
	JZY_Contact_Person()
	{
		this->JZY_Contact_Person_name = "无信息";
		this->JZY_Contact_Person_phonenumber = "无信息";
		this->JZY_Contact_Person_email = "无信息";
		this->JZY_Contact_Person_stress = "无信息";
		this->JZY_Contact_Person_job = "无信息";
		this->JZY_Contact_Person_carrier_company = "无信息";
    }

    //拷贝构造
    JZY_Contact_Person(string JZY_Contact_Person_name, string JZY_Contact_Person_phonenumber, string JZY_Contact_Person_email, string JZY_Contact_Person_stress, string JZY_Contact_Person_job, string JZY_Contact_Person_carrier_company)
    {
        this->JZY_Contact_Person_name = JZY_Contact_Person_name;
        this->JZY_Contact_Person_phonenumber = JZY_Contact_Person_phonenumber;
        this->JZY_Contact_Person_email = JZY_Contact_Person_email;
        this->JZY_Contact_Person_stress = JZY_Contact_Person_stress;
        this->JZY_Contact_Person_job = JZY_Contact_Person_job;
        this->JZY_Contact_Person_carrier_company = JZY_Contact_Person_carrier_company;

        //cout << "拷贝构造调用成功" << endl;
    }

    //初始界面菜单
    void JZY_Contact_menu();

    //信息录入
    void JZY_Contact_information_initialization(string JZY_Contact_Person_name, string JZY_Contact_Person_phonenumber, string JZY_Contact_Person_email, string JZY_Contact_Person_stress, string JZY_Contact_Person_job, string JZY_Contact_Person_carrier_company);
    void JZY_Contact_information_initialization(JZY_Contact_Person& P);

    //展示联系人信息
    void JZY_Contact_show(JZY_Contact_Person &Person);

    //成员变量访问
    string JZY_Contact_name_out();
    string JZY_Contact_phonenumber_out();
    string JZY_Contact_email_out();
    string JZY_Contact_stress_out();
    string JZY_Contact_job_out();
    string JZY_Contact_carrier_company_out();

    ~JZY_Contact_Person() 
    {
        //cout << "析构函数调用成功" << endl;
    }

private:
    string JZY_Contact_Person_name;//姓名
    string JZY_Contact_Person_phonenumber;//电话
    string JZY_Contact_Person_email;//邮箱
    string JZY_Contact_Person_stress;//住址
    string JZY_Contact_Person_job;//职业
    string JZY_Contact_Person_carrier_company;//公司
};