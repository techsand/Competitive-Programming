#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<string>
#include<map>
#include <locale>

#include <iostream>
using namespace std;

int main()
{
    int n;
    
    char per[26];
  
    map<char,char> mymap;
    
    char str[108];
    
    scanf("%d%s",&n,per);
    
    
        for (int i = 0; i<26; i++) 
        {
            mymap.insert(std::pair<char,char>('a'+i,per[i]));
        }
    
    map<char, char>::iterator p;
    
    
    while(n--)
    {
        //printf("HELLO\n");
        scanf("%s",str);
        
        for (int i = 0; str[i]!='\0'; i++) {
            if(str[i]=='_')
            {
                printf(" ");
                continue;
            }
            else if(str[i]=='.'||str[i]==','||str[i]=='?'||str[i]=='!')
            {
                printf("%c",str[i]);
                continue;
            }
                
            
            if(isupper(str[i]))
            {
               // printf("is upper - %d\n",isupper(str[i]));
                p = mymap.find(tolower(str[i]));
               printf("%c",toupper(p->second));
            }
          else
          { p = mymap.find(str[i]);
               printf("%c",(p->second));
          }
//        }
       
          
        }
        printf("\n");
    }
}