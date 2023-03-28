#include"JZY.Contact_Person.h"

void JZY_Contact_Person::JZY_Contact_menu()
{
	//cout << "----------欢迎进入电子通讯录系统----------" << endl;
}

void JZY_Contact_Person::JZY_Contact_show(JZY_Contact_Person &Person)
{
	cout << "姓 名:   " << Person.JZY_Contact_Person_name << endl;
	cout << "电 话:   " << Person.JZY_Contact_Person_phonenumber << endl;
	cout << "邮 箱:   " << Person.JZY_Contact_Person_email << endl;
	cout << "地 址:   " << Person.JZY_Contact_Person_stress << endl;
	cout << "工 作:   " << Person.JZY_Contact_Person_job << endl;
	cout << "公 司:   " << Person.JZY_Contact_Person_carrier_company << endl << endl;
}

void JZY_Contact_Person::JZY_Contact_information_initialization(string JZY_Contact_Person_name, string JZY_Contact_Person_phonenumber, string JZY_Contact_Person_email, string JZY_Contact_Person_stress, string JZY_Contact_Person_job, string JZY_Contact_Person_carrier_company)
{
	this->JZY_Contact_Person_name = JZY_Contact_Person_name;
	this->JZY_Contact_Person_phonenumber = JZY_Contact_Person_phonenumber;
	this->JZY_Contact_Person_email = JZY_Contact_Person_email;
	this->JZY_Contact_Person_stress = JZY_Contact_Person_stress;
	this->JZY_Contact_Person_job = JZY_Contact_Person_job;
	this->JZY_Contact_Person_carrier_company = JZY_Contact_Person_carrier_company;
	cout << "----------该用户信息录入成功----------" << endl;
}

void JZY_Contact_Person::JZY_Contact_information_initialization(JZY_Contact_Person &P)
{
	string JZY_Contact_Person_name;
	string JZY_Contact_Person_phonenumber;
	string JZY_Contact_Person_email;
	string JZY_Contact_Person_stress;
	string JZY_Contact_Person_job;
	string JZY_Contact_Person_carrier_company;

	cout << "请输入联系人姓名：";
	getline(cin, JZY_Contact_Person_name);
	this->JZY_Contact_Person_name = JZY_Contact_Person_name;

	cout << "请输入联系人电话：";
	getline(cin, JZY_Contact_Person_phonenumber);
	this->JZY_Contact_Person_phonenumber = JZY_Contact_Person_phonenumber;

	cout << "请输入联系人邮箱：";
	getline(cin, JZY_Contact_Person_email);
	this->JZY_Contact_Person_email = JZY_Contact_Person_email;

	cout << "请输入联系人住址：";
	getline(cin, JZY_Contact_Person_stress);
	this->JZY_Contact_Person_stress = JZY_Contact_Person_stress;

	cout << "请输入联系人职业：";
	getline(cin, JZY_Contact_Person_job);
	this->JZY_Contact_Person_job = JZY_Contact_Person_job;

	cout << "请输入联系人公司：";
	getline(cin, JZY_Contact_Person_carrier_company);
	this->JZY_Contact_Person_carrier_company = JZY_Contact_Person_carrier_company;

	cout << "----------该用户信息录入成功----------" << endl;
	cout << endl;
}

//成员函数访问
string JZY_Contact_Person::JZY_Contact_name_out()
{
	return JZY_Contact_Person_name;
}
string JZY_Contact_Person::JZY_Contact_phonenumber_out()
{
	return JZY_Contact_Person_phonenumber;
}
string JZY_Contact_Person::JZY_Contact_email_out()
{
	return JZY_Contact_Person_email;
}
string JZY_Contact_Person::JZY_Contact_stress_out()
{
	return JZY_Contact_Person_stress;
}
string JZY_Contact_Person::JZY_Contact_job_out()
{
	return JZY_Contact_Person_job;
}
string JZY_Contact_Person::JZY_Contact_carrier_company_out()
{
	return JZY_Contact_Person_carrier_company;
}

