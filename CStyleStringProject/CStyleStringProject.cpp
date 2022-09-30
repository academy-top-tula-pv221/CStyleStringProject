#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

char* MyStrChr(char*, char);
int CharCount(char*, char);

int main()
{
    char cstr1[] = "Hello";
    int cstr1Len = strlen(cstr1);

    char cstr2[] = " world";
    int cstr2Len = strlen(cstr2);

    char* str = new char[30];
    //str = new char[100];

    strcpy(str, cstr1);
    str[strlen(str)] = '\0';
    std::cout << str << "\n";

    strcat(str, cstr2);
    std::cout << str << "\n";
    str[strlen(str)] = '\0';
    //strncpy(str, cstr + 6, 5);


    //std::cout << str << "\n";
    //cstr[5] = '$';
    //std::cout << cstr << "\n";

    //std::cout << cstr;

    /*char s1[] = "ABDEFGTP";
    char s2[] = "ABDE";

    int res = strcmp(s1, s2);
    if (res < 0)
        std::cout << "s1 < s2\n";
    else if(res > 0)
        std::cout << "s1 > s2\n";
    else
        std::cout << "s1 == s2\n";

    char* findchr = strchr(s1, 'D');
    if (findchr)
        std::cout << findchr << "\n";
    else
        std::cout << "not found\n";

    char s3[] = "helllo";
    if (char* sf = strstr(s3, "ll"))
        std::cout << "found! " << sf << "\n";
    else
        std::cout << "not found\n";*/

    char strNum[] = "1234";
    int num = atoi(strNum);

    std::cout << num << "\n";

    char strDbl[] = "123.27e2";
    double numDbl = atof(strDbl);

    std::cout << numDbl << "\n";

}




char* MyStrChr(char* str, char chr)
{
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == chr)
            return &str[i];
    return nullptr;
}

int CharCount(char* str, char chr)
{
    int count{};
    while (str = strchr(str, chr))
    {
        count++;
        str++;
    }
    /*for (int i = 0; i < strlen(str); i++)
        if (str[i] == chr)
            count++;*/
    return count;
}