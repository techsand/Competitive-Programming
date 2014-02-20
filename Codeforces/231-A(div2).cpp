#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cin>>str;
    int a=0,b=0,c=0,t=0,e=0;
    for(int i=0;i<str.length();i++){
        if(t==0){
            if(str.at(i)=='|'){
                a++;
            }
            else if(str.at(i)=='+'){
                t=1;
            }
            else
            {
                e=-1;
                break;
            }
        }
        else if(t==1){
            if(str.at(i)=='|'){
      //              cout<<"b increased at "<<i<<endl;
                b++;
            }
            else if(str.at(i)=='='){
                t=3;
            }
            else
            {
                e=-1;
                break;
            }
        }
        else{
            if(str.at(i)=='|'){
                c++;
            }
            else if(str.at(i)=='='||str.at(i)=='+'){
                e=-1;
            }
        }
    }

    //printf(" a=%d b=%d c=%d e=%d\n",a,b,c,e);

    if(e==-1){
        cout<<"Impossible\n";
    }
    else{
        if((a+b)==c)
            cout<<str<<endl;
        else if ( (a+b -c) == 2 ){
            if(a!=1){
                for(int i=1;i<a;i++)
                    cout<<'|';

                    cout<<'+';
                for(int i=1;i<=b;i++)
                    cout<<'|';
            }
            else{
                for(int i=1;i<=a;i++)
                    cout<<'|';

                    cout<<'+';

                for(int i=1;i<b;i++)
                    cout<<'|';
            }

            cout<<'=';
            for(int i=1;i<=(c+1);i++)
                    cout<<'|';

            cout<<endl;
        }
        else if ( (a+b-c)==-2){
                for(int i=1;i<=(a+1);i++)
                    cout<<'|';

                    cout<<'+';

                for(int i=1;i<=b;i++)
                    cout<<'|';

                cout<<'=';

                for(int i=1;i<c;i++)
                        cout<<'|';

                cout<<endl;
        }
        else
            cout<<"Impossible\n";
    }
}
