/* 기본 자료형
*char : 문자
*int : 정수(0,-123,333)
*   - short
*   - int
*   - long int
--------------------------------
*signed : +, -
*unsigned : +
--------------------------------
*자료형 : 변수(variable)
*영문자, 숫자, undersocre 조합
--------------------------------
*char ; 1바이트
*signed char : 1비트, 부호비트, 7비트 숫자 (-128 ~127)
*unsigned char : 8비트 숫자 (0~255) 
*/
#include <stdio.h>

/*void main()
{
	char ch = 'a'; // ascii 한 문자 저장
	char cd = 97; //십진수
	char cx = 0x61; //16진수
	char _co = 0141; //8진수

	printf("ch=(%c), cd(%c), cx(%c)\n", ch, cd, cx);
	printf("ch=(%d), cd(%x), cx(%o), co(%x)\n", ch, cd, cx, _co);

	signed char cc1 = 127;
	signed char cc2 = -128;
	signed char cc3 = 128;
	unsigned char uc1 = 255;

	

	printf("cc1(%d), cc2(%d), cc3(%d). uc1(%d)\n", cc1, cc2, cc3, uc1);

	char abc;"" 별명
	메모리번지 32bit, 4byte
	_test, TEST, test, Test
	_7123, __abc121

	규칙, 일관성


	my_name : linux
	myName : Java
	c_key 
	n_key

	C++, CPP
	int m_iVal
}*/

void main()
{
	char ch = 'a'; // 문자형 상수(불변의 값)
	char ch1 = ch + 1;
	printf("ch=(%c), ch1(%c)(%d) \n", ch, ch1, ch1); // "" =  문자열
}

/*함수 (Function)
리턴타입 함수이름(파라미터)

void main()
*/