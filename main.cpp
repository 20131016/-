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
	//导入图片
	sprintf_s(imgPath, "images/0.png");
	loadimage(&img[0], imgPath,100,100);
	sprintf_s(imgPath, "images/1.png");
	loadimage(&img[1], imgPath,140,40);
	while (i != 18)
	{
		putimage(0, 25, &img[0]);
		putimage(150, 100, &img[1]);
		//鼠标操作
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
					//printf("点中了！\n");
					i++;
				}
			}
		}
		//判断显示什么字
		if (i == 0)
		{
			outtextxy(140, 50, "父亲节快乐······");
		}
		else if (i == 1)
		{
			outtextxy(140, 50, "在这个温暖的日子里······");
		}
		else if (i == 2)
		{
			outtextxy(140, 50, "我想对亲爱的您说一声······");
		}
		else if (i == 3)
		{
			outtextxy(140, 50, "爸爸······");
		}
		else if (i == 4)
		{
			outtextxy(140, 50, "您辛苦了······");
		}
		else if (i == 5)
		{
			outtextxy(110, 50, "感谢您一直以来的无私付出和无尽关怀");
			outtextxy(140, 70, "······");
		}
		else if (i == 6)
		{
			outtextxy(120, 50, "是您用坚实的双手撑起我的未来");
			outtextxy(150, 70, "······");
		}
		else if (i == 7)
		{
			outtextxy(120, 50, "用温暖的目光指引我前行的方向");
			outtextxy(150, 70, "······");
		}
		else if (i == 8)
		{
			outtextxy(110, 50, "您是我们生命中最重要的人······");
		}
		else if (i == 9)
		{
			outtextxy(140, 50, "是那个永远为我着想······");
		}
		else if (i == 10)
		{
			outtextxy(140, 50, "无怨无悔付出的父亲······");
		}
		else if (i == 11)
		{
			outtextxy(140, 50, "今天是您的节日······");
		}
		else if (i == 12)
		{
			outtextxy(140, 50, "请接受我最真挚的祝福······");
		}
		else if (i == 13)
		{
			outtextxy(140, 50, "愿您身体健康······");
		}
		else if (i == 14)
		{
			outtextxy(140, 50, "心情愉快······");
		}
		else if (i == 15)
		{
			outtextxy(140, 50, "每天都充满幸福与喜悦······");
		}
		else if (i == 16)
		{
			outtextxy(140, 50, "父亲节快乐······");
		}
		else if (i == 17)
		{
			outtextxy(140, 50, "我爱您！");
		}
	}
	return 0;
}