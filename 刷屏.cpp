#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;
int main()
{
    float a,b,i;
    cout<<"����������ˢ���ı���"<<endl;
    cin>>a;
    system("color 7F"); //��������ɫ��װX�õ� 
    cout<<"��������������"<<endl;
    cin>>b;
    system("color 9F");
    b=b*1000;//�Ѻ���ת������ 
    cout<<"�븴������ˢ��������"<<endl;//ˢ�������� 
    system("pause");//�ȴ�������� 
    system("color 6F");
    cout<<"�������ƶ��������"<<endl; 
    Sleep(2000);
    system("color");
    cout<<"ˢ������3���ʼ"<<endl;//��ʱ����Ԥ�� 
    Sleep(1000);
    cout<<"3"<<endl;
    system("color 4F");
    Sleep(1000);
    cout<<"2"<<endl;
    system("color 5F");
    Sleep(1000);
    cout<<"1"<<endl;
    system("color 0F");
    mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);//���������� 
    mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);//������̧�� 
    for(i=0;i<a;i++)
    {
        keybd_event(0x11, 0, 0, 0);//CTRL������ 
        keybd_event(0x56, 0, 0, 0); //V������ 
        keybd_event(0x56, 0, 2, 0); //V��̧�� 
        keybd_event(0x11, 0, 2, 0);//CTRL��̧�� 
        keybd_event(VK_RETURN,0,0,0);//enter������ 
        keybd_event(VK_RETURN,0,2,0);//enter��̧�� 
        Sleep(b);//������� 
    }
    system("color 1F");
    cout<<"ˢ������"<<endl;
    Sleep(100);
    return main();//�ظ�ѭ�� 
}
