#include"JZY.Contact_Person.h"

void JZY_Contact_Person::JZY_Contact_menu()
{
	//cout << "----------��ӭ�������ͨѶ¼ϵͳ----------" << endl;
}

void JZY_Contact_Person::JZY_Contact_show(JZY_Contact_Person &Person)
{
	cout << "�� ��:   " << Person.JZY_Contact_Person_name << endl;
	cout << "�� ��:   " << Person.JZY_Contact_Person_phonenumber << endl;
	cout << "�� ��:   " << Person.JZY_Contact_Person_email << endl;
	cout << "�� ַ:   " << Person.JZY_Contact_Person_stress << endl;
	cout << "�� ��:   " << Person.JZY_Contact_Person_job << endl;
	cout << "�� ˾:   " << Person.JZY_Contact_Person_carrier_company << endl << endl;
}

void JZY_Contact_Person::JZY_Contact_information_initialization(string JZY_Contact_Person_name, string JZY_Contact_Person_phonenumber, string JZY_Contact_Person_email, string JZY_Contact_Person_stress, string JZY_Contact_Person_job, string JZY_Contact_Person_carrier_company)
{
	this->JZY_Contact_Person_name = JZY_Contact_Person_name;
	this->JZY_Contact_Person_phonenumber = JZY_Contact_Person_phonenumber;
	this->JZY_Contact_Person_email = JZY_Contact_Person_email;
	this->JZY_Contact_Person_stress = JZY_Contact_Person_stress;
	this->JZY_Contact_Person_job = JZY_Contact_Person_job;
	this->JZY_Contact_Person_carrier_company = JZY_Contact_Person_carrier_company;
	cout << "----------���û���Ϣ¼��ɹ�----------" << endl;
}

void JZY_Contact_Person::JZY_Contact_information_initialization(JZY_Contact_Person &P)
{
	string JZY_Contact_Person_name;
	string JZY_Contact_Person_phonenumber;
	string JZY_Contact_Person_email;
	string JZY_Contact_Person_stress;
	string JZY_Contact_Person_job;
	string JZY_Contact_Person_carrier_company;

	cout << "��������ϵ��������";
	getline(cin, JZY_Contact_Person_name);
	this->JZY_Contact_Person_name = JZY_Contact_Person_name;

	cout << "��������ϵ�˵绰��";
	getline(cin, JZY_Contact_Person_phonenumber);
	this->JZY_Contact_Person_phonenumber = JZY_Contact_Person_phonenumber;

	cout << "��������ϵ�����䣺";
	getline(cin, JZY_Contact_Person_email);
	this->JZY_Contact_Person_email = JZY_Contact_Person_email;

	cout << "��������ϵ��סַ��";
	getline(cin, JZY_Contact_Person_stress);
	this->JZY_Contact_Person_stress = JZY_Contact_Person_stress;

	cout << "��������ϵ��ְҵ��";
	getline(cin, JZY_Contact_Person_job);
	this->JZY_Contact_Person_job = JZY_Contact_Person_job;

	cout << "��������ϵ�˹�˾��";
	getline(cin, JZY_Contact_Person_carrier_company);
	this->JZY_Contact_Person_carrier_company = JZY_Contact_Person_carrier_company;

	cout << "----------���û���Ϣ¼��ɹ�----------" << endl;
	cout << endl;
}

//��Ա��������
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

