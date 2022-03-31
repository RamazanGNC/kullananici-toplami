// 5 ten 20 ye kadar olan sayýlarýn toplamý

#include <stdio.h>
int main (void)
{
	int i;
	int toplam;
	int a;
	int b;
	int fark;
	i=1;
	toplam=0;
	
	printf("lutfen min sayi giriniz : ");
	scanf ("%d",&a);
	
	printf ("lutfen max sayi giriniz : ");
	scanf ("%d",&b);
	//a=5;
	//b=7;
	fark = b-a+1;
	
	while (i<=fark)
	{
		toplam = toplam+a;
		a = a+1;
		i = i+1;
	}
	
	printf ("sonuc %d",toplam);
	
	
	

}
