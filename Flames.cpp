#include<bits/stdc++.h> 
using namespace std;

int main()
{
    int count=0;
    string boyname;
    cout<<"Enter Boy Name :"<<endl;
    cin>>boyname;
    string girlname;
    cout<<"Enter Girl Name :"<<endl;
    cin>>girlname;
    transform(boyname.begin(), boyname.end(), boyname.begin(), ::toupper);
    transform(girlname.begin(), girlname.end(), girlname.begin(), ::toupper);
    for(int i=0;i<boyname.length();i++)
    {
        for(int j=0;j<girlname.length();j++)
        {
            if(girlname[j]==boyname[i])
            {
                girlname.erase(j,1);
                boyname.erase(i,1);
                count++;
                continue;
            }
        }

    }
    
    if(count==0)
    {
        cout<<"Undefinable Bonding !"<<endl;
        cout<<"----Made by Trilok Shetty----"<<endl;
        return 1;
    }
    string f="flames";
    int c=0;
    for (int i = 0; f.length() > 1; i++) {
        c++;
        if (c == count) {
            c=0;
            f.erase(i, 1);  
            i = -1;         
            continue;
        } 
        else if (i == f.length() - 1) {
            i = -1;         
        }
        if(f.length()<=1)
        {
            break;
        }
    }
    if(f[0]=='f')
    {
        cout<<"Friends"<<endl;
    }
    if(f[0]=='l')
    {
        cout<<"Love"<<endl;
    }
    if(f[0]=='a')
    {
        cout<<"Affection"<<endl;
    }
    if(f[0]=='m')
    {
        cout<<"Marriage"<<endl;
    }
    if(f[0]=='e')
    {
        cout<<"Enemies"<<endl;
    }
    if(f[0]=='s')
    {
        cout<<"Siblings"<<endl;
    }
    cout<<"----Made by Trilok Shetty----"<<endl;

}