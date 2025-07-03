#include<iostream>
#include<windows.h>

int main(){

	MessageBox(NULL,L"你真的确定要打开这个东西吗?",L"最后一次警告",MB_YESNO|MB_ICONWARNING);
    system("START https://www.bilibili.com/video/BV1GJ411x7h7/?spm_id_from=333.337.search-card.all.click&vd_source=597e466ef710fffe8014182bede215d8");
    

    return 0;
}
