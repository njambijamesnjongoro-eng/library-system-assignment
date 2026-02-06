#include <iostream>
using namespace std;
class Book 
{
public:
    int id;
};
class Library
 {
public:
    Book books[5];
    int count;
    
    Library() 
	{
        count = 0;
    }
    void add(int id)
	 {
        books[count].id = id;
        count++;
    }
    void search(int id) 
	{
        for (int i = 0; i < count; i++)
            if (books[i].id == id) 
			{
                cout << "Book found\n";
                return;
            }
        cout << "Book not found\n";
    }
};
int main() 
{
    Library lib;
    int x;
    lib.add(1);
    lib.add(2);
    lib.add(3);
    cout << "Enter book number: ";
    cin >> x;

    lib.search(x);

    return 0;
}
