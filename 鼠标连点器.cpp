#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
POINT curpos; //鼠标的位置
float i;      //点击速度
int j;        //点击次数
int a = 0, b = 0;         //储存鼠标坐标
void selectrate(void);    //选择点击速度、次数
void click(int i, int j); //开始点击

int main()
{
    system("mode con cols=25 lines=10"); //窗口大小
    system("title 源世界.Dracula出品");
    //简单说明
    printf("1.这是一个鼠标连点器,操作异常简单。 2.空格键开始，暂停，继续 3.ESC键重新开始 4.点击的位置为鼠标的位置。 5.CTRL键锁定，解锁位置 ");
    while (1)
    {
        printf("按空格键开始");
        selectrate();
        system("cls"); //清屏
        printf("频率%.2f次/秒 次数%d次 空格键 开始 暂停 继续 ESC键 重新开始 CTRL键 锁定 解锁位置 ", 1000 / i, j);
        click(i, j);
    }
    return 0;
}

void selectrate(void)
{
    while(1)
    {
        Sleep(200);
        if (GetAsyncKeyState(VK_SPACE))
        {
            system("cls");
            printf("请输入点击频率 n 次/秒 (0.01< n <=1000) ");
            scanf("%f", &i);
            i = (int)(1000 / i);
            printf("请输入点击次数 x 次 ( 0 表示无限次) ");
            scanf("%d", &j);
            j = j == 0 ? 1000000000 : j; //用一个极大的数表示无限
            break;
        }
    }
}

void click(int i,int j)
{
    while(1)
    {
        if(GetAsyncKeyState(VK_SPACE))
        {
            int k = j;
            printf("运行 ");
            while (k--) //点击次数
            {
                if (a && b)
                    SetCursorPos(a, b);
                mouse_event(MOUSEEVENTF_LEFTDOWN, curpos.x, curpos.y, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTUP, curpos.x, curpos.y, 0, 0);
                Sleep(i);
                //锁定目标位置
                if (GetAsyncKeyState(VK_CONTROL))
                {
                    if (a && b)
                    {
                        a = 0;
                        b = 0;
                        printf("解除锁定 ");
                    }
                    else
                    {
                        GetCursorPos(&curpos);
                        a = (int)curpos.x;
                        b = (int)curpos.y;
                        printf("位置锁定 %d %d ", a, b);
                    }
                }
                if (GetAsyncKeyState(VK_SPACE))
                {
                    printf("暂停 ");
                    //接收到信号才继续执行
                    while (1)
                    {
                        if (GetAsyncKeyState(VK_SPACE))
                        {
                            printf("继续 ");
                            break;
                        }
                        Sleep(200);
                        if (GetAsyncKeyState(VK_ESCAPE))
                        {
                            printf("重新开始 ");
                            return;
                        }
                    }
                }
                if (GetAsyncKeyState(VK_ESCAPE))
                {
                    printf("重新开始 ");
                    return;
                }
            }
            printf("按空格键再来一次 ");
            while (1)
            {
                if (GetAsyncKeyState(VK_SPACE))
                    break;
                Sleep(200);
                if (GetAsyncKeyState(VK_ESCAPE))
                {
                    printf("重新开始 ");
                    return;
                }
            }
        }
        Sleep(250);
    }
}