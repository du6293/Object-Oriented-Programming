#include <iostream>

using namespace std;
int main()
{
	unsigned char option_viewed 	=	0x01;
	unsigned char option_edited 	=	0x02;
	unsigned char option_liked	 	=	0x04;
	unsigned char option_shared 	=	0x08;
	unsigned char option_deleted 	=	0x80;

	unsigned char my_article_flags	= 	0;
	
	// ��縦 ���� �� 
	
	my_article_flags |= option_viewed;
	
	// ����� ���ƿ並 Ŭ������ ��
	my_article_flags |= option_liked;
	
	// ����� ���ƿ並 �ٽ� Ŭ������ ��
	my_article_flags ^= option_liked;
	
	// �� ��縸 ������ ��
	my_article_flags ^= option_deleted;
	
	cout << "Final Flags: " << static_cast<int>(my_article_flags) << endl;
	return 0;
}
