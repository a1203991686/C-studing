#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
POINT curpos; //����λ��
float i;      //����ٶ�
int j;        //�������
int a = 0, b = 0;         //�����������
void selectrate(void);    //ѡ�����ٶȡ�����
void click(int i, int j); //��ʼ���

int main()
{
    system("mode con cols=25 lines=10"); //���ڴ�С
    system("title Դ����.Dracula��Ʒ");
    //��˵��
    printf("1.����һ�����������,�����쳣�򵥡� 2.�ո����ʼ����ͣ������ 3.ESC�����¿�ʼ 4.�����λ��Ϊ����λ�á� 5.CTRL������������λ�� ");
    while (1)
    {
        printf("���ո����ʼ");
        selectrate();
        system("cls"); //����
        printf("Ƶ��%.2f��/�� ����%d�� �ո�� ��ʼ ��ͣ ���� ESC�� ���¿�ʼ CTRL�� ���� ����λ�� ", 1000 / i, j);
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
            printf("��������Ƶ�� n ��/�� (0.01< n <=1000) ");
            scanf("%f", &i);
            i = (int)(1000 / i);
            printf("������������ x �� ( 0 ��ʾ���޴�) ");
            scanf("%d", &j);
            j = j == 0 ? 1000000000 : j; //��һ�����������ʾ����
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
            printf("���� ");
            while (k--) //�������
            {
                if (a && b)
                    SetCursorPos(a, b);
                mouse_event(MOUSEEVENTF_LEFTDOWN, curpos.x, curpos.y, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTUP, curpos.x, curpos.y, 0, 0);
                Sleep(i);
                //����Ŀ��λ��
                if (GetAsyncKeyState(VK_CONTROL))
                {
                    if (a && b)
                    {
                        a = 0;
                        b = 0;
                        printf("������� ");
                    }
                    else
                    {
                        GetCursorPos(&curpos);
                        a = (int)curpos.x;
                        b = (int)curpos.y;
                        printf("λ������ %d %d ", a, b);
                    }
                }
                if (GetAsyncKeyState(VK_SPACE))
                {
                    printf("��ͣ ");
                    //���յ��źŲż���ִ��
                    while (1)
                    {
                        if (GetAsyncKeyState(VK_SPACE))
                        {
                            printf("���� ");
                            break;
                        }
                        Sleep(200);
                        if (GetAsyncKeyState(VK_ESCAPE))
                        {
                            printf("���¿�ʼ ");
                            return;
                        }
                    }
                }
                if (GetAsyncKeyState(VK_ESCAPE))
                {
                    printf("���¿�ʼ ");
                    return;
                }
            }
            printf("���ո������һ�� ");
            while (1)
            {
                if (GetAsyncKeyState(VK_SPACE))
                    break;
                Sleep(200);
                if (GetAsyncKeyState(VK_ESCAPE))
                {
                    printf("���¿�ʼ ");
                    return;
                }
            }
        }
        Sleep(250);
    }
}