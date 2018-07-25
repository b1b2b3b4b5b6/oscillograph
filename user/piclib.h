#ifndef __PICLIB_H
#define __PICLIB_H	  		  
#include "init.h" 
#include "ili9325.h"
#include "malloc.h"
#include "exfuns.h"
#include "bmp.h"
#include "tjpgd.h"
/////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ���������ɣ��������������κ���;
//ALIENTEK MiniSTM32������
//ͼƬ���� ��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2014/3/14
//�汾��V2.0
//��Ȩ���У�����ؾ���
//Copyright(C) �������������ӿƼ����޹�˾ 2009-2019
//All rights reserved
//********************************************************************************
//����˵��
//V2.0
//1,��jpeg����⻻����TJPGD,֧�ָ����jpg/jpeg�ļ�,֧��С�ߴ�ͼƬ����jpeg��ʾ 
//2,pic_phy��������fillcolor����,���������ʾ,�����С�ߴ�jpgͼƬ����ʾ�ٶ�
//3,ai_load_picfile����,����һ������:fast,���������Ƿ�ʹ��jpeg/jpg������ʾ
//ע��:�����С�ߴ���ָ:jpg/jpegͼƬ�ߴ�С�ڵ���LCD�ߴ�.
//////////////////////////////////////////////////////////////////////////////////

#define PIC_FORMAT_ERR		0x27	//��ʽ����
#define PIC_SIZE_ERR		0x28	//ͼƬ�ߴ����
#define PIC_WINDOW_ERR		0x29	//�����趨����
#define PIC_MEM_ERR			0x11	//�ڴ����
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef TRUE
#define TRUE    1
#endif
#ifndef FALSE
#define FALSE   0
#endif 

//ͼƬ��ʾ������ӿ�  
//����ֲ��ʱ��,�������û��Լ�ʵ���⼸������


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//ͼ����Ϣ

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void piclib_init(void);								//��ʼ����ͼ
u8 ai_load_picfile(FIL *file,u16 x,u16 y,u16 width,u16 height,u8 type);//���ܻ�ͼ
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif





























