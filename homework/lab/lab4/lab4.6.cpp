#include <iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    const int NUM = 26;
    const string wordlist[NUM] = {
        "program","cat","cereal","danger","good","florid",
        "garage","heal","insult","joke","keeper","loaner",
        "nonce","onset","ok","quilt","remote","stolen",
        "train","useful","valid","where","xenon","cool","result"
    };
    srand(time(0));
    char play;
    cout << "Will you play a word game?<y/n>";
    cin >> play;
    while (play == 'y' || play == 'Y')
    {
        string target = wordlist[rand() % NUM];
        int length = target.length();
        string attempt(length, '*');
        string wrongwords = {};
        char alpha;
        int guesses = 6;
        cout << "猜猜单词是什么,它有" << length << " 个字母\n";
        cout << "一次只能猜一位,你有 " << guesses << " 次机会\n";
        while (guesses > 0 && attempt != target)
        {
            cout << "你还有 " << guesses << " 机会\n";
            cout << "请输入字母 ";
            cin >> alpha;
            guesses--;

            for (int i = 0; i < length; i++)
            {
                if (target[i] == alpha)
                {
                    attempt[i] = alpha;
                }
                cout << attempt[i];


            }
            cout << endl;

            if (wrongwords.find(alpha) != string::npos)
            {
                cout << "该字母已猜过!!!\n";
                cout << "以下字母均已猜过：";
                for (auto i = wrongwords.begin(); i != wrongwords.end(); i++)
                {
                    cout << *i;
                }
                cout << endl;
                guesses++;
            }

            if (target.find(alpha) == string::npos)
            {
                wrongwords.push_back(alpha);
                cout << "猜错啦,你还有" << guesses << "次机会" << endl;
            }

        }
        if (guesses > 0)
            cout << "恭喜答对,正确单词是 " << target << ".\n";
        else
            cout << "很遗憾，没有答对，正确单词是 " << target << ".\n";
        cout << "Will you play another? <y/n> ";
        cin >> play;
    }
    cout << "Bye." << endl;
    return 0;
}