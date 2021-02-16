/* 기본 자료형
*char : 문자
*int : 정수(0,-123,333)
*   - short
*   - int
*   - long int
--------------------------------
* 2바이트 : short
  unsigned short int : 0 ~ 65535
*/
#include <stdio.h>

void main()
{
	
	signed short int si1 = 32767;
	signed short int si2 = -32768;
	signed short int si3 = 32768;

	unsigned short int us1 = 65535;
	unsigned short int us2 = us1 + 1;

	printf("short int: si1(%d), si2(%d), si3?(%d). us1(%d), us2(%d)\n", si1, si2, si3, us1, us2);


	signed long int li1 = 2147483647;
	signed long int li2 = -2147483647 -1;
	signed long int li3 = 2147483648;

	unsigned long int ul1 = 4294967295;
	unsigned long int ul2 = ul1 + 1;

	printf("long int: (%d), (%d), ?(%d). (%ud), (%ud)\n", li1, li2, li3, ul1, ul2 );
}