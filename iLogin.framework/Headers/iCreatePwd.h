//
//  iCreatePwd.h
//  iLogin
//
//  Created by John Blaine on 9/13/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CText.h"

NS_ASSUME_NONNULL_BEGIN

@interface iCreatePwd : UIView
@property (nonatomic, retain) UIButton *title;
@property (nonatomic, retain) UIButton *login;
@property (nonatomic, retain) CText *usr;
@property (nonatomic, retain) CText *pwd;

//- (void)watchAction:(NSInteger)n login:(void(^)(NSInteger))lx reg:(void(^)(NSInteger))rx forget:(void(^)(NSInteger))fx;
//@property (copy, nonatomic) void (^loginCB)(NSInteger i);
//@property (copy, nonatomic) void (^registerCB)(NSInteger i);
//@property (copy, nonatomic) void (^forgetCB)(NSInteger i);

- (void)watchAction:(NSInteger)n pwd:(void(^)(NSString *i))lx;
@property (copy, nonatomic) void (^pwdCB)(NSString *i);

@end

NS_ASSUME_NONNULL_END
