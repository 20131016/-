#include<stdio.h>
#include<easyx.h>
#include<Windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

ExMessage msg = { 0 };

int main()
{
	initgraph(400,150, EX_NOCLOSE);
	settextcolor(BLACK);
	setbkcolor(WHITE);
	cleardevice();
	int i = 0;
	IMAGE img[2];
	char imgPath[50] = { 0 };
	//����ͼƬ
	sprintf_s(imgPath, "images/0.png");
	loadimage(&img[0], imgPath,100,100);
	sprintf_s(imgPath, "images/1.png");
	loadimage(&img[1], imgPath,140,40);
	while (i != 18)
	{
		putimage(0, 25, &img[0]);
		putimage(150, 100, &img[1]);
		//������
		if (peekmessage(&msg,EX_MOUSE))
		{
			if (msg.message == WM_LBUTTONDOWN)
			{
				int x = msg.x;
				int y = msg.y;
				//printf("(%d,%d)\n", x, y);
				if (x >= 150 && y >= 100 && x <= 150 + 140 && y <= 100 + 40)
				{
					cleardevice();
					//printf("�����ˣ�\n");
					i++;
				}
			}
		}
		//�ж���ʾʲô��
		if (i == 0)
		{
			outtextxy(140, 50, "���׽ڿ��֡�����������");
		}
		else if (i == 1)
		{
			outtextxy(140, 50, "�������ů�����������������");
		}
		else if (i == 2)
		{
			outtextxy(140, 50, "������װ�����˵һ��������������");
		}
		else if (i == 3)
		{
			outtextxy(140, 50, "�ְ֡�����������");
		}
		else if (i == 4)
		{
			outtextxy(140, 50, "�������ˡ�����������");
		}
		else if (i == 5)
		{
			outtextxy(110, 50, "��л��һֱ��������˽�������޾��ػ�");
			outtextxy(140, 70, "������������");
		}
		else if (i == 6)
		{
			outtextxy(120, 50, "�����ü�ʵ��˫�ֳ����ҵ�δ��");
			outtextxy(150, 70, "������������");
		}
		else if (i == 7)
		{
			outtextxy(120, 50, "����ů��Ŀ��ָ����ǰ�еķ���");
			outtextxy(150, 70, "������������");
		}
		else if (i == 8)
		{
			outtextxy(110, 50, "������������������Ҫ���ˡ�����������");
		}
		else if (i == 9)
		{
			outtextxy(140, 50, "���Ǹ���ԶΪ�����롤����������");
		}
		else if (i == 10)
		{
			outtextxy(140, 50, "��Թ�޻ڸ����ĸ��ס�����������");
		}
		else if (i == 11)
		{
			outtextxy(140, 50, "���������Ľ��ա�����������");
		}
		else if (i == 12)
		{
			outtextxy(140, 50, "�����������ֿ��ף��������������");
		}
		else if (i == 13)
		{
			outtextxy(140, 50, "Ը�����彡��������������");
		}
		else if (i == 14)
		{
			outtextxy(140, 50, "������졤����������");
		}
		else if (i == 15)
		{
			outtextxy(140, 50, "ÿ�춼�����Ҹ���ϲ�á�����������");
		}
		else if (i == 16)
		{
			outtextxy(140, 50, "���׽ڿ��֡�����������");
		}
		else if (i == 17)
		{
			outtextxy(140, 50, "�Ұ�����");
		}
	}
	return 0;
}