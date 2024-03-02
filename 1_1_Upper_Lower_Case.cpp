#include<iostream>
using namespace std;
class StringConverter
{
    private:
    char str[100];
    public:
    void getInput()
    {
        cout<<"Enter a string > ";
        cin.getline(str, sizeof(str));
    }
    void uppercase()
    {
        for(int i=0;str[i];i++)
        {
            str[i]=static_cast<char>(toupper(str[i]));
        }
    }
    void lowercase()
    {
        for(int i=0;str[i];i++)
        {
            str[i]=static_cast<char>(tolower(str[i]));
        }
    }
    void result()
    {
        cout<<"Converted string "<<str<<endl;
    }
};
int main ()
{
    StringConverter converter;

    converter.getInput();
    converter.uppercase();
    cout<<"\nUppercase = ";
    converter.result();
    converter.lowercase();
    cout<<"\nLowercase = ";
    converter.result();
}