//
//  InheritClass2.h
//  Scratch_Plate
//
//  Created by Joe Ferrucci on 4/28/13.
//  Copyright (c) 2013 Joseph Ferrucci. All rights reserved.
//

#ifndef __Scratch_Plate__InheritClass2__
#define __Scratch_Plate__InheritClass2__

#include <iostream>
#include "InheritClass1.h"
#include "BaseClass.h"

class InheritClass2 : BaseClass {
public:
    InheritClass2() {
        std::cout << "Inherit #2 Constructor called - Fan" << std::endl;
        BaseClass::incCount();
        std::cout << std::setw(70) << "(Con) Object # " << BaseClass::getCount() << std::endl;
    }
    
    ~InheritClass2() {
        std::cout << "Inherit #2 Destructor called - Fan" << std::endl;
        BaseClass::decCount();
        std::cout << std::setw(70) << "(Des) Object # " << BaseClass::getCount() << std::endl;
    }
private:
};

#endif /* defined(__Scratch_Plate__InheritClass2__) */
