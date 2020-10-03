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
#import "CNotify.h"

FOUNDATION_EXPORT double iLoginVersionNumber;
FOUNDATION_EXPORT const unsigned char iLoginVersionString[];

@interface iLogin : UIView

@property (nonatomic, strong) iSignin *signin;
@property (nonatomic, strong) iRegister *reg;
@property (nonatomic, strong) iForgot *forgot;
@property (nonatomic, strong) iCreatePwd *createPwd;
@property (nonatomic, strong) iVerify *verify;
@property (nonatomic, retain) CNotify *msg;

@property (nonatomic, retain) UIActivityIndicatorView *indicator;

- (void)watchAction:(NSInteger)n login:(NSString*(^)(NSString *usr, NSString *pwd))lx reg:(NSString*(^)(NSString *name, NSString *phone))rx forget:(NSString*(^)(NSString *phone))fx createPwd:(NSString*(^)(NSString *pwd))cx verify:(NSString*(^)(NSString *code))vx;

@property (copy, nonatomic) NSString* (^loginCB)(NSString *usr, NSString *pwd );
@property (copy, nonatomic) NSString* (^registerCB)(NSString *name, NSString *phone);
@property (copy, nonatomic) NSString* (^forgetCB)(NSString *phone);
@property (copy, nonatomic) NSString* (^createPwdCB)(NSString *pwd);
@property (copy, nonatomic) NSString* (^verifyCB)(NSString *code);

- (void)showStatus:(Boolean)b;
- (void)loginError:(NSString*)b;

@end

