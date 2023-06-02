###
PART 1 CODE EXAMPLE
###

#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;
int main()
{
    float a,b,i;
    cout<<"请输入你想刷屏的遍数"<<endl;
    cin>>a;
    system("color 7F"); //调背景颜色，装X用的 
    cout<<"请输入间隔的秒数"<<endl;
    cin>>b;
    system("color 9F");
    b=b*1000;//把毫秒转化成秒 
    cout<<"请复制你想刷屏的内容"<<endl;//刷屏的内容 
    system("pause");//等待复制完毕 
    system("color 6F");
    cout<<"请把鼠标移动到聊天框"<<endl; 
    Sleep(2000);
    system("color");
    cout<<"刷屏将在3秒后开始"<<endl;//给时间做预备 
    Sleep(1000);
    cout<<"3"<<endl;
    system("color 4F");
    Sleep(1000);
    cout<<"2"<<endl;
    system("color 5F");
    Sleep(1000);
    cout<<"1"<<endl;
    system("color 0F");
    mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);//鼠标左键点下 
    mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);//鼠标左键抬起 
    for(i=0;i<a;i++)
    {
        keybd_event(0x11, 0, 0, 0);//CTRL键按下 
        keybd_event(0x56, 0, 0, 0); //V键按下 
        keybd_event(0x56, 0, 2, 0); //V键抬起 
        keybd_event(0x11, 0, 2, 0);//CTRL键抬起 
        keybd_event(VK_RETURN,0,0,0);//enter键按下 
        keybd_event(VK_RETURN,0,2,0);//enter键抬起 
        Sleep(b);//间隔秒数 
    }
    system("color 1F");
    cout<<"刷屏结束"<<endl;
    Sleep(100);
    return main();//重复循环 
}


###
PART 2 EXPLANATIONS
###

