This example show how to declare and use an array of an object

#include <iostream.h>

struct Paper
{
public:
	void GetDimensions();
   	void Properties();
private:
	double Perimeter() const;
	double Area() const;
  	double Height;
    double Width;
};

void Paper::GetDimensions()
{
	cout << "Enter the dimensions of the label\n";
    cout << "Height: ";
    cin >> Height;
    cout << "Width: ";
    cin >> Width;
}

void Paper::Properties()
{
    cout << "\n\tHeight    = " << Height;
    cout << "\n\tWidth     = " << Width;
    cout << "\n\tPerimeter = " << Perimeter();
    cout << "\n\tArea      = " << Area();
    cout << "\n\n";
}

double Paper::Perimeter() const
{
	return 2 + (Height * Width);
}

double Paper::Area() const
{
	return Height * Width;
}

void main()
{
    int Samples;
    Paper Label[100];

    cout << "How many sample labels do you want? ";
    cin >> Samples;

    for(int i = 0; i < Samples; ++i)
        Label[i].GetDimensions();

    cout << "\n\nHere are the characteristics of your labels\n";
    for(int j = 0; j < Samples; ++j)
    {
        cout << "Label No. " << j;
        Label[j].Properties();
    }
}

Here is an example of running the program:

How many sample labels do you want? 2
Enter the dimensions of the label
Height: 3.25
Width: 3.25
Enter the dimensions of the label
Height: 2.15
Width: 4.55


Here are the characteristics of your labels
Label No. 0
        Height    = 3.25
        Width     = 3.25
        Perimeter = 12.5625
        Area      = 10.5625

Label No. 1
        Height    = 2.15
        Width     = 4.55
        Perimeter = 11.7825
        Area      = 9.7825
