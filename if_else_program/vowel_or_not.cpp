/* Check whether it is vowel or consonant */
#include <iostream>
using namespace std;
int main()
{   char alpha;
    cout<<"Enter an alphabet: ";
    cin>>alpha;
    if(alpha == 'a' || alpha == 'o' ||
       alpha == 'e' || alpha == 'i' || alpha == 'u' ||
       alpha == 'A' || alpha == 'E' || alpha == 'O' ||
       alpha == 'I' || alpha == 'U')
        cout<<"Vowel";
    else
        cout<<"Consonant";
    return 0;
}
