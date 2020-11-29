#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        //和上道题刚好相反
        int lastnum = 0;
        int len = s.size();
        if(len < 1)
        {
            return lastnum;
        }
        int i = 0;
        while( i < len)
        {
            switch(s[i])
            {
                case 'M': //1000
                        lastnum+=1000;
                        ++i;
                    break;
                case 'D': //500
                        lastnum+=500;
                        i++;
                    break;
                case 'C': //100
                {
                    if(i+1 <len && s[i+1] == 'M') //900
                    {
                        lastnum+=900;
                        i=i+2;
                    }
                    else if(i+1 <len && s[i+1] == 'D') //400
                    {
                        lastnum+=400;
                        i=i+2;
                    }
                    else //100
                    {
                        lastnum+=100;
                        ++i;
                    }
                    break;
                }
                case 'L':
                        lastnum+=50;
                        ++i;
                    break;
                case 'X':
                {
                    if(i+1 <len && s[i+1] == 'C')
                    {
                        lastnum+=90;
                        i=i+2;
                    }
                    else if(i+1 <len && s[i+1] == 'L')
                    {
                        lastnum+=40;
                        i=i+2;
                    }
                    else
                    {
                        lastnum+=10;
                        ++i;
                    }
                    break;
                }
                case 'V':
                {
                    lastnum+=5;
                    ++i;
                    break;
                }
                case 'I':
                {
                    if(i+1 <len && s[i+1] == 'X')
                    {
                        lastnum+=9;
                        i=i+2;
                    }
                    else if(i+1 <len && s[i+1] == 'V')
                    {
                        lastnum+=4;
                        i=i+2;
                    }
                    else
                    {
                        lastnum+=1;
                        ++i;
                    }
                    break;
                }
                default :
                    break;
            }
        }

        return lastnum;
    }
};


int main()
{
	Solution sln;
	string R = "III";
	int result = sln.romanToInt(R);
	cout << "The result is " << result << endl;
	
	return 0;
}
