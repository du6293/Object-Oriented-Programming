#include <iostream>
#include <vector>
#include <string>

/* 제휴 관계 (Association)
	어느 한 쪽이 주인이 되지 않는 관계
	두 class가 서로를 member variable로 갖게 됨
*/
using namespace std;

class Doctor; // forward declaration

class Patient
{
private:
	string m_name;
	vector<Doctor*> m_doctors; // vector는 container이고 vector 내 Docotor의 포인터들이 들어가게 됨
public:
	Patient(string name_in)
		:m_name(name_in)
	{}

	void addDoctor(Doctor* new_doctor)
	{
		m_doctors.push_back(new_doctor);
	}

	void meetDoctors();
	
	friend class Doctor;
};

class Doctor
{
private:
	string m_name;
	vector<Patient*> m_patients;
public:
	Doctor(string name_in)
		:m_name(name_in)
	{}

	void addPatient(Patient* new_patient)
	{
		m_patients.push_back(new_patient);
	}

	void meetPatients()
	{
		for (auto& ele : m_patients)
			cout << "Meet doctor : " << ele->m_name << endl;
	}

	friend class Patient;
};

void Patient::meetDoctors()
{
	for (auto& ele : m_doctors)
		cout << "Meet doctor : " << ele->m_name << endl;
}

int main(void)
{
	Patient* p1 = new Patient("Jack Jack");
	Patient* p2 = new Patient("Dash");
	Patient* p3 = new Patient("Violet");

	Doctor* d1 = new Doctor("Doctor K");
	Doctor* d2 = new Doctor("Doctor L");

	p1->addDoctor(d1);
	d1->addPatient(p1);

	p2->addDoctor(d2);
	d2->addPatient(p1);

	p2->addDoctor(d1);
	d1->addPatient(p2);

	// Patient meet doctors
	p1->meetDoctors();

	// doctors meet patients
	d1->meetPatients();

	// deletes

	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;

	return 0;
}
