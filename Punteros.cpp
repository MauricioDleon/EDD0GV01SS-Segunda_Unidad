#include <iostream>

using namespace std; 

int main()
{
char bloques[3] = {'A','B','C'};
char *ptr = &bloques[4433];
char temp;

temp = bloques[0];
cout << "temp: " << bloques << endl; 
temp = *(bloques + 2);
cout << "bloques: " << *(bloques +2) << endl; 
temp = *(ptr + 1);
cout << "bloques: " << *(ptr + 1) << endl;
temp = * ptr;
cout << "bloques: " << ptr << endl;


ptr = bloques + 1;
temp = *ptr;
temp = *(ptr + 1);




ptr = bloques;
temp = *++ptr;
temp = ++*ptr;
temp = *ptr++;
temp = *ptr;

return 0;
}
