/* for windows 7 only */
#include < iostream.h >
#include < stdlib.h >

main()
{
    char ch;
    cout<<"Do you want to shutdown your computer now (y/n)\n";
    cin>>ch;
    if (ch == 'y' || ch == 'Y')
        system("C:\\WINDOWS\\System32\\shutdown /s");
    /*shutdown command*/
    return 0;
}