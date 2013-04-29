//
//  BaseClass.h
//  Scratch_Plate
//
//  Created by Joe Ferrucci on 4/28/13.
//  Copyright (c) 2013 Joseph Ferrucci. All rights reserved.
//

#ifndef __Scratch_Plate__BaseClass__
#define __Scratch_Plate__BaseClass__
#include <iomanip>
#include <iostream>
class BaseClass
{

public:
    BaseClass() : mbIsOn(false) {
        std::cout << "Base Constructor called - CElectronicDevice" << std::endl;
        incCount();
        std::cout << std::setw(70) << "(Con) Object # " << getCount() << std::endl;
    }
    
    void incCount () { BaseClass::count++; }
    void decCount () { BaseClass::count--; }
    int getCount () { return BaseClass::count; }
    
    ~BaseClass() {
        std::cout << "Base Destructor called - CElectronicDevice" << std::endl;
        decCount();
        std::cout << std::setw(70) << "(Des) Object # " << getCount() << std::endl;
    }
private:
    bool mbIsOn;
    static int count;
};

#endif /* defined(__Scratch_Plate__BaseClass__) */
