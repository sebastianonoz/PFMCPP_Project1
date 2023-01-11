#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: Cat
//  action 1: the cat scratches
cat.scratches();
//  action 2: the cat purrs
cat.purrs();
//  action 3: the cat hunts
cat.hunts();
//  2)
//  Noun: Chef
//  action 1: the chef cooks food
chef.cooksFood();
//  action 2: the chef preps ingredients
chef.prepsIngredients();
//  action 3: the chef bakes break
chef.bakesBread();
//  3)
//  Noun: Tree
//  action 1: the tree grows leaves
tree.growsLeaves();
//  action 2: the tree bears fruit
tree.bearsFruit();
//  action 3: the tree provides shade
tree.providesShade();
//  4)
//  Noun: Sunflower
//  action 1: the sunflower grows
sunflower.grows();
//  action 2: the sunflower turns towards sun
sunflower.turnsTowardsSun();
//  action 3: the sunflower makes seeds
sunflower.makesSeeds();

//  5)
//  Noun: Pen
//  action 1: the pen writes
pen.writes();
//  action 2: the pen clicks open
pen.clicksOpen();
//  action 3: the pen is held
pen.isHeld();
//  6)
//  Noun: Car
//  action 1: the car drives
car.drives();
//  action 2: the car runs on fuel
car.runsOnFuel();
//  action 3: the car brakes
car.brakes();
//  7)
//  Noun: Dog
//  action 1: the dog barks
dog.barks();
//  action 2: the dog wags tail
dog.wagsTail();
//  action 3: fetches
dog.fetches();
//  8)
//  Noun: Customer Profile Manager
//  action 1: The customer profile manager creates a new customer profile
customerProfileManager.createCustomerProfile();
//  action 2: The customer profile manager updates an existing customer's profile information
customerProfileManager.updateCustomerProfile();
//  action 3: The customer profile manager removes a customer profile from the system
customerProfileManager.removeCustomerProfile();
//  9)
//  Noun: Hammer
//  action 1: the hammer drives nails
hammer.drivesNails();
//  action 2: the hammer pulls nails
hammer.pullsNails();
//  action 3: the hammer breaks things
hammer.breaksThings();
//  10)
//  Noun: Bicycle
//  action 1: the bicycle pedals
bicycle.pedals();
//  action 2: the bicycle steers
bicycle.steers();
//  action 3: the bicycle brakes
bicycle.brakes();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
