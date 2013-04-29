//
//  InheritClass1.h
//  Scratch_Plate
//
//  Created by Joe Ferrucci on 4/28/13.
//  Copyright (c) 2013 Joseph Ferrucci. All rights reserved.
//

#ifndef __Scratch_Plate__InheritClass1__
#define __Scratch_Plate__InheritClass1__

#include <iostream>
#include "BaseClass.h"

class InheritClass1 : BaseClass {
public:
    InheritClass1() {
        std::cout << "Inherit #1 Constructor called - Fan" << std::endl;
        BaseClass::incCount();
        std::cout << std::setw(70) << "(Con) Object # " << BaseClass::getCount() << std::endl;
    }
    
    ~InheritClass1() {
        std::cout << "Inherit #1 Destructor called - Fan" << std::endl;
        BaseClass::decCount();
        std::cout << std::setw(70) << "(Des) Object # " << BaseClass::getCount() << std::endl;
    }
private:
};

#endif /* defined(__Scratch_Plate__InheritClass1__) */
