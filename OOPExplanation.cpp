/* Object Oriented Programming (OOP):

Object oriented programming (OOP) is one of the most important topics in coding and 
is one of the most used coding methods used in the current programming industry.
Not only does it help to simplify your code, but it also allows for parts of 
your code to be reused, thus increasing efficiency and speed. 

There are 6 main components of objected oriented programming, including: Objects, 
Classes, Methods, Encapsulation, Inheritance and Polymorphism. In this example you
will learn about Objects and Classes. 

An object can be anything in the world. An object both knows/has something and 
does something. Take for example your car or your parent's car. If you were to 
describe your car, you would probably talk about its colour, brand, model, number
of seats and maybe its engine type. These would be the characteristics of the car, 
but in the world of OOP this would be what the car knows/has or is the car's variables.
Now consider the question of what the car does. Your response may be that the car 
drives, turns, honks its horn, brakes, etc. These are the actions of the car and in 
the world of OOP these represent the car's methods. So the variables of an object are
the characteristics of the object and the methods of an object are the actions of the
object. Now try naming the variables and methods of your computer. What does your
computer have and what does it do? Try naming the variables and methods of other objects
you can think of. 

A class is like the blueprint of the object. You can think of a class as the general 
form/idea of your object. Let's take for example your car. If you compare your car with
your parent's or your friend's car, what would be some similarities that you would 
observe. Most likely both cars have a colour, engine, model, brand etc. Your car may 
have a specific colour, engine, model, etc. and your friend's/parent's car will have
specific characteristics as well. The general idea or characterisitic (e.g. colour,
engine, model, brand, etc.) would form a part of your class or blueprint. Knowing this
you can think of an object being a specific example or instance of a class, where your
car or your parent's car would be a specific object of a generic car class. If we take
the example of your computer again, the class would be a "computer" class or laptop 
class and the object would be your specific computer with all its specifications. You 
can also think of an object being a specific example of a class. Try naming other 
classes and give an example of what an object of that class could look like. 

Now that we know what a class and object are let's see how they are implemented in C++.
Below we will help you learn to code your own class and object in C++.
*/

#include <iostream>
#include <string>
using namespace std;

/* 
In order to create a class you need to use the class keyword followed by the name
of your class (which should start with a capital letter). Once your have written the
name of your class, you should add a pair of squiggly brackets, followed by a semi colon.
It should follow the format shown below:

class Name 
{

};

Create a Car class using the template below.
*/ 

class /* ADD CLASS NAME HERE */
{
public: // do not worry about this public keyword for now
    /* Here you will add your variables or characterisitics of a car. Take for
    example the general characteristics we mentioned before (e.g. colour,
    engine, model, brand, etc.). In order to add these characteristics to your class
    you first need to add the data type and then the name of the characterstic.
    An example is shown below:
    
    string colour;
    int numberOfMiles;

    Don't forget to include your semi colons and maitain proper indentation. Indentation
    should be the same as this comment. Below create variables for colour, brand,
    model and number of seats. Consider which data type would be appropriate for 
    each variable.
    */

    /* ADD VARIABLES HERE */

    /* Here you will add the methods or actions of your car. What does a car do? You 
    can drive a car, you can honk the horn in a car and you can turn a car. Below 
    we will implement these actions/methods using the same format as a function. You
    will first require a key word, then the name of your function, followed by a pair 
    of regular brackets and squiggly brackets. An example is shown below:

    void turnCarLeft()
    {
        cout << "Car turned left" << endl;
    }

    Using the same format create a turn engine on, honk horn and turn car right 
    method below. Make sure to use the appropriate function keyword and maintain 
    proper indentation. In terms of the content of the methods, just print a 
    statement of what the car is doing. 
    */  

    /* ADD METHODS HERE */
};

int main()
{
    /* In order to create an object of your class, you need to first add the name 
    of your class followed by the name of the object. An example is shown below:

    Car yourCar;

    You can also add specific characteristics to you car using dot notation. For example,
    in order to change the colour of you car you need to first add the name of the object
    followed by a dot then addthe variable name. You then equate this statement to your
    desired value. An example is shown below:

    yourCar.colour = "Blue";

    Add an object called my car below and initialize its variables to the characteristics
    of your car (eg. colour, brand, model and number of seats)
    */

    /* CREATE OBJECT AND INITIALIZE VARIABLES HERE */

    /* In order to get print your object's characterisitics to the console, you need 
    to create a cout statement with the object, dot and variable notation used before
    when initializing. An example is shown below:
    
    cout << yourCar.colour << endl;

    In order to call your object's methods you can use the same dot notation, but since
    you are calling a method you need to include a set of brackets after the method name.
    As well, since you are calling a method you no longer need the cout statement. It is 
    very similar to calling a function normally. An example is shown below:

    yourCar.turnCarLeft();

    Below print your object's variables to the console (eg. colour, brand, model and 
    number of seats) and call all your object's methods (eg. turn engine on, honk 
    horn and turn car right)
    */

    /* PRINT OBJECT VARIABLES AND CALL OBJECT METHODS HERE*/

    /* Try running your program and see whether it works. The ouput should be similar
    to the following:

    Blue
    5
    Engine turned on
    Horn was honked
    Car turned right

    If you are having trouble you can look at the OOPAnswer cpp file to see where you are
    going wrong. Also try adding your own variables and methods to your class. Check 
    whether they work in the main method as well. 
    */
    return 0;
}