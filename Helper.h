//
//  Helper.h
//  dinoEdu
//
//  Created by utadjibaev on 8/10/13.
//  Copyright (c) 2013 ulugbek. All rights reserved.
//

#import "cocos2d.h"
#import <GameKit/GameKit.h>
@interface Helper : CCLayer
+(CCRenderTexture*) createStroke: (CCLabelTTF*) label   size:(float)size   color:(ccColor3B)cor;
@end
