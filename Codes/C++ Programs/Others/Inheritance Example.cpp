Inheritance Example

class Person
{
public:
	Person(const string& firstName, const string& lastName) : _firstName(firstName), _lastName(lastName);
	string getFirstName() { return _firstName;};
	string getLastName() { return _lastName;};
private:
	string _firstName;
	string _lastName;
}

class Mother : public Person
{
   public:
	Mother(const string& firstName, const string& lastName) : Person(firstName, LastName);
	~Mother();
	Person* hasBaby(const string& firstName);
private:
	vector<Person*> children;
};

Person* Mother::hasBaby(const string& firstName);
{
	Person* newBaby = new Person(firstName, getLastName());
	children.pushback(newBaby);
	return newBaby;
}

int main(void)
{
   Mother sue("Sue", "Smith");
   Person joe = sue.hasBaby("Joe");
   Person kay = sue.hasBaby("Kay");

   cout << "Baby Joe's last name is: " << joe.getLastName() << endl;
   cout << "Baby Kay's last name is: " << kay.getLastName() << endl;

   return 0;
}
