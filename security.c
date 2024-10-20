#include<reg51.h>
#include<lcd.h>
#include<string.h>

sbit r1=P1^0;
sbit r2=P1^1;
sbit r3=P1^2;
sbit r4=P1^3;
sbit c1=P1^4;
sbit c2=P1^5;
sbit c3=P1^6;
char a[]={"1234"};
char b[4];
int n=0;
int val;
void main()
{	
	lcd_init();
	//lcd_string("hi");

	while(1)
	{
		if(n<=3)
		{
	r1=r2=r3=r4=c1=c2=c3=1;
	r1=0;
	if(c1==0)
	{
		lcd_data('1');
		b[n]='1';
		n++;
		delay(200);
		
	}
  else if(c2==0)
	{
	lcd_data('2');
		b[n]='2';
		n++;
	delay(200);
	}
 else if(c3==0)
	{
	lcd_data('3');
		b[n]='3';
		n++;
	delay(200);
	}
	r1=r2=r3=r4=c1=c2=c3=1;
	r2=0;
	if(c1==0)
	{
		lcd_data('4');
		b[n]='4';
		n++;
		delay(200);
	}
  else if(c2==0)
	{
	lcd_data('5');
		b[n]='5';
		n++;
	delay(200);
	}
 else if(c3==0)
	{
	lcd_data('6');
		b[n]='6';
		n++;
	delay(200);
	}
	r1=r2=r3=r4=c1=c2=c3=1;
	r3=0;
	if(c1==0)
	{
		lcd_data('7');
		b[n]='7';
		n++;
		delay(200);
	}
  else if(c2==0)
	{
	lcd_data('8');
		b[n]='8';
		n++;
	delay(200);
	}
 else if(c3==0)
	{
	lcd_data('9');
		b[n]='9';
		n++;
	delay(200);
	}
r1=r2=r3=r4=c1=c2=c3=1;
	r4=0;
	if(c2==0)
	{	
		lcd_data('0');
		b[n]='0';
		n++;
		delay(200);
	}
}
	else 
		{
		val=strncmp(a,b,4);
			if(val==0)
				
			{
			 lcd_cmd(0x01);
			 lcd_cmd(0x80);
				lcd_string("Access Granted");
			}
		 if(val>0||val<0)
		 {
			 lcd_cmd(0x01);
			 lcd_cmd(0x80);
				lcd_string("Access Denied");		 
		 
		 
		 }
	}	

}
}















	
	

