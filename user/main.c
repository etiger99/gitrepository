#include "stc8h_conf.h"


unsigned char   DIS1[] = {"    ���Ӽ���    "};
unsigned char   DIS2[] = {"    STC8H8K     "};

/**************������***********************/
void main ()
{ 
	unsigned char i = 0;
	
	P0M0 = 0x00;
	P0M1 = 0x00;
	
	P2M0 = 0x00;
	P2M1 = 0x00;

	P3M0 = 0x00;
	P3M1 = 0x00;
	
	P4M0 = 0x00;//0x20;  //0010 0000
	P4M1 = 0x00;  //0000 0000
	
	L1P45RE = 1;
	L2P46GR = 1;
 
	Lcd12864_Screen_Init();     //�趨Һ��������ʽ
	Lcd12864_Write_Cmd(0x80);
	Lcd12864_Write_Data('A');
		delay1ms();
		delay1ms();
	Lcd12864_Write_Cmd(0x90);
	for(i=0;i<16;i++)
	{
	  Lcd12864_Write_Data(DIS2[i]);
		delay1ms();
		delay1ms();
		
	}
	
		Lcd12864_Write_Cmd(0x88);
	for(i=0;i<16;i++)
	{
	  Lcd12864_Write_Data(DIS1[i]);
		delay1ms();
		delay1ms();
		
	}
			Lcd12864_Write_Cmd(0x98);
	for(i=0;i<16;i++)
	{
	  Lcd12864_Write_Data(DIS2[i]);
		delay1ms();
		delay1ms();
		
	}

  for(i=0;i<200;i++)	
	delay1ms();
  for(i=0;i<200;i++)	
	delay1ms();
	  for(i=0;i<200;i++)	
	delay1ms();
	  for(i=0;i<200;i++)	
	delay1ms();
	  for(i=0;i<200;i++)	
	delay1ms();
	  for(i=0;i<200;i++)	
	delay1ms();

	
	
	while(1){
			
		//L1P45RE = 0;	
		delay10us();	
		L1P45RE = 1;	
		delay10us();
	
	}
}
