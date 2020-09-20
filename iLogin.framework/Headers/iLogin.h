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
#import "iCreatePwd.h"
#import "iVerify.h"

FOUNDATION_EXPORT double iLoginVersionNumber;
FOUNDATION_EXPORT const unsigned char iLoginVersionString[];

@interface iLogin : UIView

@property (nonatomic, strong) iSignin *signin;
@property (nonatomic, strong) iRegister *reg;
@property (nonatomic, strong) iForgot *forgot;
@property (nonatomic, strong) iCreatePwd *createPwd;
@property (nonatomic, strong) iVerify *verify;


- (void)watchAction:(NSInteger)n login:(BOOL(^)(NSString *usr, NSString *pwd))lx reg:(BOOL(^)(NSString *name, NSString *phone))rx forget:(BOOL(^)(NSString *phone))fx createPwd:(BOOL(^)(NSString *pwd))cx verify:(BOOL(^)(NSString *code))vx;

@property (copy, nonatomic) BOOL (^loginCB)(NSString *usr, NSString *pwd );
@property (copy, nonatomic) BOOL (^registerCB)(NSString *name, NSString *phone);
@property (copy, nonatomic) BOOL (^forgetCB)(NSString *phone);
@property (copy, nonatomic) BOOL (^createPwdCB)(NSString *pwd);
@property (copy, nonatomic) BOOL (^verifyCB)(NSString *code);


@end

