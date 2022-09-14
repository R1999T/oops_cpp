#include <iostream>
using std::string;

// 4.2 Abstraction(let's say what employee want a promotion)
// we can do this with abstract class
class abstract_employee
{
    virtual void ask_for_promotion() = 0; // make this function obligatory: any mentioned class will be forced to complete the task done by this method, we have to make this method  virtual
    // implemention of above fun is must to be provided
};

// 4.2 specify the name of the contract(abstraction) syntax for abstraction
class Employee : abstract_employee
{
    // 1. access modifiers
private:
    string Company;
    int Age;

protected:
    string Name; // 4.3 if we make it protected it will be avialable for DIRECT ACCESS IN DERIVED CLASS

public:
    // commented to understand encapsulation
    //  string Name;
    //  string Company;
    //  int Age;

    // 2.
    void introduce_employee()
    {
        std::cout << "name: " << Name << std::endl;
        std::cout << "company: " << Company << std::endl;
        std::cout << "age: " << Age << std::endl;
    }

    // 3.constructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
    Employee() {}

    // 4.1 encapsulation: our own way to get and provide method
    // a.
    void set_name(string name)
    { // setter
        for (int i = 0; i < name.length(); i++)
        {
            if ((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z'))
            {
                Name = name;
            }
            else
            {
                std::cout << "invalid name" << std::endl;
            }
        }

        Name = name;
    }
    string get_name()
    { // getter
        return Name;
    }
    // b.
    void set_company(string company)
    {
        Company = company;
    }
    string get_company()
    {
        return Company;
    }
    // c.
    void set_age(int age)
    {
        // we can add validation rule according to our convinience
        if (age >= 16)
        {
            Age = age;
        }
    }
    int get_age()
    {
        return Age;
    }

    // 4.2 Abstraction(let's say what employee want a promotion)
    // we can do this with abstract class
    void ask_for_promotion()
    {
        // many factor so we take age faactor
        if (Age > 30)
        {
            std::cout << Name << " got promoted!" << std::endl;
        }
        else
        {
            std::cout << " sorry not promoted" << std::endl;
        }
    }

    //4.4.POLYMORPHISM
    virtual void work(){ //Virtual function: It means when it is invoked virtual make sure to check IF THERE IS IMPLEMENTATION OF THE SAME FUNCTION IN A DERIVED CLASS OR NOT IF YES THEN IMPLEMENT THAT 
        std::cout<<Name<<" is checking email. task backlog, performing tasks ..."<<std::endl;
    }

};

    

// 4.3.0 Inheritance types of employee
class Developer : public Employee
{
public:
    string fav_prog_language;
    Developer(string name, string company, int age, string fav_prog_lang) : Employee(name, company, age) // specify prev class constructor
    {
        fav_prog_language = fav_prog_lang;
    }

    void fix_bug()
    {
        std::cout << Name << " of age " << get_age() << " fixed bug using " << fav_prog_language << std::endl;
    }
    void work(){
        std::cout<<Name<<" knows "<<fav_prog_language<<" programming language and writing code ..."<<std::endl;
    }
};

// 4.3.1
class Teacher :public Employee
{
public:
    string Subject;
    void prepare_lesson()
    {
        std::cout << Name << " is preparing " << Subject << " lesson " <<std::endl;
    }
    Teacher(string name, string company, int age, string subject) : Employee(name, company,age)
    {
        Subject = subject;
    }
    void work(){
        std::cout<<Name<<" is teaching "<<Subject<<", performing experiments ..."<<std::endl;
    }

};

int main()
{
    // 1.
    // Employee employee1;
    // comment to see default constructor
    //  employee1.Name = "raghav";
    //  employee1.Company = "raghav_enterprise";
    //  employee1.Age = 25;

    // employee1.introduce_employee();

    // 2.
    // Employee employee2;
    //  employee2.Name = "Kris";
    //  employee2.Company = "kris_enterprise";
    //  employee2.Age = 40;

    // employee2.introduce_employee();

    // 3.after creating your own constructor(code reduced to 2 lines)
    Employee employee3 = Employee("R1ghav", "RT_ENTERPRISE", 23);
    employee3.introduce_employee();

    // 4.1 encapsulation
    Employee employee4;
    employee4.set_age(16);
    employee4.set_name("r1ghav");
    employee4.set_company("comp");
    std::cout << employee4.get_name() << " is " << employee4.get_age() << " years old." << std::endl;

    // 4.2 AbsTRACTION

    Employee employee5 = Employee("Sam", "sam_enterprise", 20);
    employee5.ask_for_promotion();

    // 4.3 INHERITANCE
    Developer d = Developer("Rick", "r_enterprise", 43, "golang");
    d.fix_bug();
    d.ask_for_promotion();

    Teacher t = Teacher("jack", "daigakko", 35, "History"); //i was not getting error even i hVENT CREAETED CONSTRUCTOR
    t.prepare_lesson();
    t.ask_for_promotion();
    

    //4.4 let's try to access the work() function from Employee class to other classes
    // d.work();
    // t.work();
    //but d is developer and t is teacher so we can define work differently for both of them
    
    //IMPORTANT RULE: The most common use of polymorphism is whaen a parent
    //class reference is used to refer to achild class object
    Employee *e1 = &d;// Developer IS AN Employee type
    Employee* e2 = &t;//base class ptr derived class object

    e1->work();
    e2->work();

    //to make the above code work we have to make work() work in real!


    return 0;
}

// NOTES:
/*
1. access modifiers:
a. public
b. private
c. protected

2. class method is a function that process the data of the object

3. constructor: it is a special method which is invoked every time an object of class created,
    it we don't create it default constructor will run.
    It is used to initialize the data members of new objects generally.
    It constructs the values i.e. provides data for the object which is why it is known as constructors.
RULES:
-   It does not have return type
-   It has the same name as that of class
-   It is a public(may/maynot)

    when we create our own constructor we looses the default constructor created by compiler
    it also reduces the code

/4/four pillers of OOPS
1. incapsulation
2. abstraction
3. inheritance
4. polymorphism

/4.1/Encapsulation: we want to secure the data in class so that it cannot be accessed directly by other class.
        we want to provide the data with our own way.
        "It describes the idea of bundling data and methods that work on that data within one unit"
    getters and setters are the way to do encapsulation
    only the members of the particular class will be able to access the variables

/4.2/Abstraction: Hiding complex function thing behind the procedure to make things look simple
eg: smartphone take pics just press button(but the logic is complex)
    our side is user friendly
HIDING COMPLEXITY FROM USER

/4.3/Inheritance:
-   Inherited class or "DERIVED CLASS".
-   When another class(child class) inherit the properties of a base class then this process is
    is called inheritance
-   eg: THREe CLASES,

/4.4/Polymorphism
-   poly + morph => "many" + "forms"
-   ability of an object or a method having many form
-   parent class object is used to refer to a child class
-   //but d is developer and t is teacher so we can define work differently for both of them

In C++, polymorphism is mainly divided into two types:

1. COMPILE TIME POLYMORPHISM: 
    This type of polymorphism is achieved by function overloading or operator overloading.
    It can be achieved using 
    a. function overloading: same name function DIFFERENT PARMETERS
    function with 1 int parameter
    void func(int x)
    {
        cout << "value of x is " << x << endl;
    }
      
    function with same name but 1 double parameter
    void func(double x)
    {
        cout << "value of x is " << x << endl;
    }


    b. operator overloading:
        c++ provide this option also
        we can make use of the addition operator (+) for string class to concatenate two strings. We know that the task of this operator is to add two operands.
        Complex operator + (Complex const &obj) {
         Complex res;
         res.real = real + obj.real;
         res.imag = imag + obj.imag;
         return res;
    }






2. Runtime Polymorphism:
    This type of polymorphism is achieved by Function Overriding.
    Function overriding occurs when a derived class has a definition for one of the member functions of the base class. 
    That base function is said to be overridden. 


/5/SOME DEFINITIONS:::

A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class. 
When you refer to a derived class object using a pointer or a reference to the base class, 
you can call a virtual function for that object and execute the derived class’s version of the function. 

*/
