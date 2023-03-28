//#include"JZY.Contact_Person.h"
#include"address_book.h"

//菜单展示
void address_book::EAB_menu()
{
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "-----按数字键进行操作                               ~~~" << endl;
	cout << "-----按 1 键 添加 联系人信息                        ~~~" << endl;
	cout << "-----按 2 键 查看 电子通讯录                        ~~~" << endl;
	cout << "-----按 3 键 查看 指定 联系人 信息                  ~~~" << endl;
	cout << "-----按 4 键 删除 指定联系人信息                    ~~~" << endl;
	cout << "-----按 5 键 修改 指定联系人信息                    ~~~" << endl;
	//cout << "-----按 5 键  查找 指定联系人编号" << endl;
	cout << "-----按 9 键 清空 电子通讯录系统（谨慎使用）        ~~~" << endl;
	cout << "-----按 0 键 退出 电子通讯录系统                    ~~~" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	cout << "-----请输入您的选择：";
}

//录入指定用户信息
void address_book::EAB_Person_information_initialization()
{
	JZY_Contact_Person P;
	P.JZY_Contact_information_initialization(P);
	Person.push_back(P);
	cout << "-----联系人添加成功！" << endl << endl;
}

//信息导入函数
void address_book::EAB_file_information_import(string JZY_Contact_Person_name, string JZY_Contact_Person_phonenumber, string JZY_Contact_Person_email, string JZY_Contact_Person_stress, string JZY_Contact_Person_job, string JZY_Contact_Person_carrier_company)
{
	JZY_Contact_Person P(JZY_Contact_Person_name, JZY_Contact_Person_phonenumber, JZY_Contact_Person_email, JZY_Contact_Person_stress, JZY_Contact_Person_job, JZY_Contact_Person_carrier_company);
	Person.push_back(P);
}

//展示指定用户信息
void address_book::EAB_show(int inf_null)
{
	int idx = EAB_Person_name_find();
	if (idx<0 || idx>Person.size()) {
		cout << "该联系人不存在，请重试！" << endl << endl;
		return;
	}
	Person[idx].JZY_Contact_show(Person[idx]);
}

//展示所有用户信息
void address_book::EAB_show()
{
	if (!Person.size()) {
		cout << "通讯录为空！" << endl << endl;
		return;
	}
	for (auto item : Person) {
		item.JZY_Contact_show(item);
	}
}

//查找姓名
int address_book::EAB_Person_name_find()
{
	int idx = -1;
	string name;
	cout << "请输入该联系人姓名： ";
	getline(cin, name);

	for (int i = 0; i < Person.size(); i++) {
		//item.JZY_Contact_show(item);
		string tmp = Person[i].JZY_Contact_name_out();
		if (tmp == name) {
			idx = i;
			break;
		}
	}

	//if (idx != -1)cout << "联系人编号为： " << idx << endl;

	return idx;
}

//删除指定联系人信息
void address_book::EAB_Person_information_delete()
{
	/*int idx;
	char a;
	cout << "请输入您要删除的联系人编号: " << endl;
	cin >> idx; a = getchar();*/

	int idx = -1;
	idx = EAB_Person_name_find();

	if (idx<0 || idx>Person.size()) {
		cout << "该联系人不存在，请重试！" << endl << endl;
		return;
	}
	Person.erase(Person.begin() + idx);
	cout << "-----联系人删除成功！" << endl << endl;
}

//修改联系人信息
void address_book::EAB_Person_modifying_contact_information()
{
	int idx = -1;
	idx = EAB_Person_name_find();
	Person[idx].JZY_Contact_information_initialization(Person[idx]);
	cout << "-----修改成功！" << endl;
	cout << endl;
}

//清空通讯录
void address_book::EAB_Person_clear()
{
	Person.clear();
	cout << "-----数据已清空！" << endl;
	cout << endl;
}

//文件读取
void address_book::EAB_file_open()
{
	cout << "-----正在打开文件。。。" << endl;
	Sleep(800);

	fstream fin;
	fin.open(filename, ios::in);

	if (fin.is_open() == false) {
		cout << "打开文件" << filename << "失败。" << endl;
		return;
	}

	cout << "-----正在导入联系人信息。。。请耐心等待。。。" << endl;
	Sleep(800);

	string buffer;
	
	while (getline(fin, buffer)) {
		//cout << buffer << endl;

		int idx = 0;

		string JZY_Contact_Person_name;
		string JZY_Contact_Person_phonenumber;
		string JZY_Contact_Person_email;
		string JZY_Contact_Person_stress;
		string JZY_Contact_Person_job;
		string JZY_Contact_Person_carrier_company;

		int l = 0;
		string strmid;

		for (int i = 0; i < buffer.size(); i++) {
			if (buffer[i] == ' ') {
				strmid.assign(buffer, l, i - l);
				l = i + 1;

				switch (idx)
				{
				case 0: {
					JZY_Contact_Person_name = strmid;
					break;
				}
				case 1: {
					JZY_Contact_Person_phonenumber = strmid;
					break;
				}
				case 2: {
					JZY_Contact_Person_email = strmid;
					break;
				}
				case 3: {
					JZY_Contact_Person_stress = strmid;
					break;
				}
				case 4: {
					JZY_Contact_Person_job = strmid;
					break;
				}
				/*default:
					break;*/
				}

				idx++;

			}
		}
		strmid.assign(buffer, l, buffer.size());
		JZY_Contact_Person_carrier_company = strmid;

		EAB_file_information_import(JZY_Contact_Person_name, JZY_Contact_Person_phonenumber, JZY_Contact_Person_email, JZY_Contact_Person_stress, JZY_Contact_Person_job, JZY_Contact_Person_carrier_company);
	}

	fin.close();

	cout << "-----联系人 信息 导入成功！" << endl;
	Sleep(800);

	cout << "-----操作文件完成。" << endl;
	Sleep(800);

	cout << endl;
}

//文件导出
void address_book::EAB_file_push()
{
	fstream fout;
	fout.open(filename, ios::out | ios::trunc);

	if (fout.is_open() == false) {
		cout << "打开文件" << filename << "失败。" << endl;
		return;
	}

	for (auto item : Person) {
		string JZY_Contact_Person_name = item.JZY_Contact_name_out();
		string JZY_Contact_Person_phonenumber = item.JZY_Contact_phonenumber_out();
		string JZY_Contact_Person_email = item.JZY_Contact_email_out();
		string JZY_Contact_Person_stress = item.JZY_Contact_stress_out();
		string JZY_Contact_Person_job = item.JZY_Contact_job_out();
		string JZY_Contact_Person_carrier_company = item.JZY_Contact_carrier_company_out();
		fout << JZY_Contact_Person_name << " ";
		fout << JZY_Contact_Person_phonenumber << " ";
		fout << JZY_Contact_Person_email << " ";
		fout << JZY_Contact_Person_stress << " ";
		fout << JZY_Contact_Person_job << " ";
		fout << JZY_Contact_Person_carrier_company << endl;
	}

	fout.close();

	cout << "-----正在导出联系人信息，请稍后......" << endl;
	Sleep(800);
	cout << "-----联系人 信息 导出成功！" << endl;
	Sleep(800);
	cout << endl;
}

//退出函数
void address_book::EAB_quit()
{
	for (int i = 3; i > 0; i--) {
		cout << "----------系统将在" << i << "秒后关闭！" << endl;
		Sleep(1000);
	}
}