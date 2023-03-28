//#include"JZY.Contact_Person.h"
#include"address_book.h"

//�˵�չʾ
void address_book::EAB_menu()
{
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << "-----�����ּ����в���                               ~~~" << endl;
	cout << "-----�� 1 �� ��� ��ϵ����Ϣ                        ~~~" << endl;
	cout << "-----�� 2 �� �鿴 ����ͨѶ¼                        ~~~" << endl;
	cout << "-----�� 3 �� �鿴 ָ�� ��ϵ�� ��Ϣ                  ~~~" << endl;
	cout << "-----�� 4 �� ɾ�� ָ����ϵ����Ϣ                    ~~~" << endl;
	cout << "-----�� 5 �� �޸� ָ����ϵ����Ϣ                    ~~~" << endl;
	//cout << "-----�� 5 ��  ���� ָ����ϵ�˱��" << endl;
	cout << "-----�� 9 �� ��� ����ͨѶ¼ϵͳ������ʹ�ã�        ~~~" << endl;
	cout << "-----�� 0 �� �˳� ����ͨѶ¼ϵͳ                    ~~~" << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

	cout << "-----����������ѡ��";
}

//¼��ָ���û���Ϣ
void address_book::EAB_Person_information_initialization()
{
	JZY_Contact_Person P;
	P.JZY_Contact_information_initialization(P);
	Person.push_back(P);
	cout << "-----��ϵ����ӳɹ���" << endl << endl;
}

//��Ϣ���뺯��
void address_book::EAB_file_information_import(string JZY_Contact_Person_name, string JZY_Contact_Person_phonenumber, string JZY_Contact_Person_email, string JZY_Contact_Person_stress, string JZY_Contact_Person_job, string JZY_Contact_Person_carrier_company)
{
	JZY_Contact_Person P(JZY_Contact_Person_name, JZY_Contact_Person_phonenumber, JZY_Contact_Person_email, JZY_Contact_Person_stress, JZY_Contact_Person_job, JZY_Contact_Person_carrier_company);
	Person.push_back(P);
}

//չʾָ���û���Ϣ
void address_book::EAB_show(int inf_null)
{
	int idx = EAB_Person_name_find();
	if (idx<0 || idx>Person.size()) {
		cout << "����ϵ�˲����ڣ������ԣ�" << endl << endl;
		return;
	}
	Person[idx].JZY_Contact_show(Person[idx]);
}

//չʾ�����û���Ϣ
void address_book::EAB_show()
{
	if (!Person.size()) {
		cout << "ͨѶ¼Ϊ�գ�" << endl << endl;
		return;
	}
	for (auto item : Person) {
		item.JZY_Contact_show(item);
	}
}

//��������
int address_book::EAB_Person_name_find()
{
	int idx = -1;
	string name;
	cout << "���������ϵ�������� ";
	getline(cin, name);

	for (int i = 0; i < Person.size(); i++) {
		//item.JZY_Contact_show(item);
		string tmp = Person[i].JZY_Contact_name_out();
		if (tmp == name) {
			idx = i;
			break;
		}
	}

	//if (idx != -1)cout << "��ϵ�˱��Ϊ�� " << idx << endl;

	return idx;
}

//ɾ��ָ����ϵ����Ϣ
void address_book::EAB_Person_information_delete()
{
	/*int idx;
	char a;
	cout << "��������Ҫɾ������ϵ�˱��: " << endl;
	cin >> idx; a = getchar();*/

	int idx = -1;
	idx = EAB_Person_name_find();

	if (idx<0 || idx>Person.size()) {
		cout << "����ϵ�˲����ڣ������ԣ�" << endl << endl;
		return;
	}
	Person.erase(Person.begin() + idx);
	cout << "-----��ϵ��ɾ���ɹ���" << endl << endl;
}

//�޸���ϵ����Ϣ
void address_book::EAB_Person_modifying_contact_information()
{
	int idx = -1;
	idx = EAB_Person_name_find();
	Person[idx].JZY_Contact_information_initialization(Person[idx]);
	cout << "-----�޸ĳɹ���" << endl;
	cout << endl;
}

//���ͨѶ¼
void address_book::EAB_Person_clear()
{
	Person.clear();
	cout << "-----��������գ�" << endl;
	cout << endl;
}

//�ļ���ȡ
void address_book::EAB_file_open()
{
	cout << "-----���ڴ��ļ�������" << endl;
	Sleep(800);

	fstream fin;
	fin.open(filename, ios::in);

	if (fin.is_open() == false) {
		cout << "���ļ�" << filename << "ʧ�ܡ�" << endl;
		return;
	}

	cout << "-----���ڵ�����ϵ����Ϣ�����������ĵȴ�������" << endl;
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

	cout << "-----��ϵ�� ��Ϣ ����ɹ���" << endl;
	Sleep(800);

	cout << "-----�����ļ���ɡ�" << endl;
	Sleep(800);

	cout << endl;
}

//�ļ�����
void address_book::EAB_file_push()
{
	fstream fout;
	fout.open(filename, ios::out | ios::trunc);

	if (fout.is_open() == false) {
		cout << "���ļ�" << filename << "ʧ�ܡ�" << endl;
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

	cout << "-----���ڵ�����ϵ����Ϣ�����Ժ�......" << endl;
	Sleep(800);
	cout << "-----��ϵ�� ��Ϣ �����ɹ���" << endl;
	Sleep(800);
	cout << endl;
}

//�˳�����
void address_book::EAB_quit()
{
	for (int i = 3; i > 0; i--) {
		cout << "----------ϵͳ����" << i << "���رգ�" << endl;
		Sleep(1000);
	}
}