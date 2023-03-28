#pragma once

#include"JZY.Contact_Person.h"

class address_book :public JZY_Contact_Person
{
public:
    address_book()
    {
        cout << "********************************************************" << endl;
        cout << "********************************************************" << endl;
        cout << "----------欢迎进入 电子通讯录系统 1.1 ----------" << endl;
        cout << "----------现已支持按指定联系人姓名查找功能" << endl;
        cout << endl;
    }

    //菜单展示
    void EAB_menu();

    //录入指定用户信息
    void EAB_Person_information_initialization();

    //展示指定用户信息
    void EAB_show(int idx);
    //展示所有用户信息
    void EAB_show();

    //删除指定联系人信息
    void EAB_Person_information_delete();

    //查找姓名
    int EAB_Person_name_find();

    //修改联系人信息
    void EAB_Person_modifying_contact_information();

    //清空通讯录
    void EAB_Person_clear();

    //文件读取
    void EAB_file_open();

    //信息导入函数
    void EAB_file_information_import(string JZY_Contact_Person_name, string JZY_Contact_Person_phonenumber, string JZY_Contact_Person_email, string JZY_Contact_Person_stress, string JZY_Contact_Person_job, string JZY_Contact_Person_carrier_company);

    //文件导出
    void EAB_file_push();

    //退出函数
    void EAB_quit();

    //析构
    ~address_book()
    {
        cout << "----------成功退出系统，感谢您的使用！----------" << endl;
    }

private:
    //JZY_Contact_Person Person[5];
    vector<JZY_Contact_Person>Person;
};