#define SHIFT_BIT 1
#define CTRL_BIT 2
#define ALT_BIT 4

// ������ �켱������ ������� ��
// &���� ==�� �켱������ �� ���� ���� ���Ǳ� ������ ����� �������� �ʴ´�. 
// ���� 
// (key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT)) == 0)
// ���� �����־�� �Ѵ�. 