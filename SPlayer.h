//
//  SPlayer.h
//  RC-sim
//
//  Created by Moises Anthony Aranas on 8/23/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#include <GLUT/glut.h>
#include "obj.h"

@interface SPlayer : NSObject {
	GLfloat pitch;
	GLfloat yaw;
	GLfloat roll;
}

@end
