#include<stdio.h>
int main(void)
{

	int head, leg;//“ª‚Æ‘«
	int t, k;//’ß‚Æ‹T
	printf("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
	//”’l‚Ì“ü—Í
	printf("“ª‚Ì”¨");
	scanf_s("%d", &head);
	printf_s("‘«‚Ì”¨");
	scanf_s("%d", &leg);
	t = leg / 2 - head;//’ß‚Ì”
	k = head - t;//‹T‚Ì”
	if (t<=0 || k<=0 || leg % 2 != 0)//‘«‚Ì”‚ª‹ô”‚Å‚È‚¢,‚Ü‚½‚Í’ß‚Æ‹T‚ª1•C‚¸‚Â‚¢‚È‚¢‚Æ‚«
		printf("ŒvZ‚Å‚«‚Ü‚¹‚ñB\n");
	}
	else//‘«‚Ì”‚ª‹ô”‚Å,’ß‚Æ‹T‚ª1•C‚¸‚Â‚¢‚é‚Æ‚«
	{

		printf("‹T‚ª%d•CA’ß‚ª%d•C‚Å‚ ‚éB\n", k, t);
	}
	return 0;
}