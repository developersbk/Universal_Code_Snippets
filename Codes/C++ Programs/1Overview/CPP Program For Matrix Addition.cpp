#include<iostream.h>

class matrix

{

    int a[2][2], b[2][2], c[2][2];

    void add()

    {
cout<<”Enter the A matrix:
            ”<<”\n”;
        for(int i=0; i<2; i++)
            {
                for(int j=0; j<2; j++)
                    {
                        cin>>a[i][j];
                    }
            }
cout<<”Enter the B matrix:
            ”<<”\n”;
        for(int i=0; i<2; i++)
            {
                for (int j=0; j<2; j++)
                    {
                        cin>>b[i][j];
                    }
            }
        for( i = 0; i< 2; i++)
            {
                for( j = 0; j<2; j++)
                    {
                        c[i][j] = a[i][j] + b[i][j];
                    }
            }
cout<<”Addition of Two matrixes:
            ”<<c[i][j];
    }

    main()

    {
        matrix m;
        m.add();
    }


