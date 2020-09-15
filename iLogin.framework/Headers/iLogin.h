//
//  iLogin.h
//  iLogin
//
//  Created by John Blaine on 9/13/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "iSignin.h"
#import "iRegister.h"
#import "iForgot.h"

FOUNDATION_EXPORT double iLoginVersionNumber;
FOUNDATION_EXPORT const unsigned char iLoginVersionString[];

@interface iLogin : UIView

@property (nonatomic, strong) iSignin *signin;
@property (nonatomic, strong) iRegister *reg;
@property (nonatomic, strong) iForgot *forgot;

@end

