#include <iostream>



int main(void){
	
	using namespace std;
	
	int i = 123;
	float f = 123.456f;
	
	/* �ּ� */
	void *my_void;
	
	/* data type�� �ٸ���(int, float) data type�� size�� �ٸ�����
	data�� �ּҸ� ǥ���ϴ� data ���� �����ϴ�. */
	/*(void*)�� Ư�� data type�� �������� �ʴ� ������
	�� � Ÿ���� ���� �ּҵ� ���� �����ϴ�.
	������ ���� ���� ������ �� �����Ƿ� type casting �ʿ��ϴ�. */
	my_void = (void*)&i; // int ���� i�� �ּҸ� void �����Ϳ� ����  
	my_void = (void*)&f; // float ���� f�� �ּҸ� void �����Ϳ� ����  
	
	return 0;
} 
