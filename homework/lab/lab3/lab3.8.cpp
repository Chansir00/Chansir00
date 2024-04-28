#include <iostream>
using namespace std;

int main()
{
    char c;
    // 空白字符,其他字符,数字字符,行,单词,字符
    int nWhite = 0, nOhter = 0, nDigit = 0, nLine = 0, nWord = 0, nChar = 0;
    cout << "请输入字符";
    c = cin.get();
    // 创建数组记录数字出现的次数
    int arr[10] = { 0 };
    while (c != 'q')
    {
        nChar++;
        int n = 0;
        switch (c)
        {
        case'1':case'2':case'3':case'4':case'5':case'6':case'7':case'8':case'9':case'0':
            // 分别统计0-9个数字出现的次数
            n = static_cast<int>(c - '0');
            arr[n]++;
            nDigit++;
            break;
        case ' ':
            nWhite++;
            nWord++;
            break;
        case '\t':
            nWhite++;
            break;
        case '\n':
            nLine++;
            nWhite++;
            break;
        default:
            nOhter++;
            break;
        }
        c = cin.get();
    }
    // 单词个数等于空格个数加行个数
    nWord += nLine;
    cout << "Dight is " << '\t' << nDigit << endl;
    cout << "White is " << '\t' << nWhite << endl;
    cout << "Other is " << '\t' << nOhter << endl;
    cout << "Line is " << '\t' << nLine << endl;
    cout << "Word is " << '\t' << nWord << endl;
    cout << "Char is " << '\t' << nChar << endl;
    // 循环打印数组
    for (int i = 0; i < 10; i++)
    {
        cout << i << "出现了" << arr[i] << "次" << endl;
    }

    system("pause");
    return 0;
}



