//
//  iSignin.h
//  iLogin
//
//  Created by John Blaine on 9/13/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface iSignin : UIView

@property (nonatomic, retain) UIButton *title;
@property (nonatomic, retain) UIButton *login;
@property (nonatomic, retain) UITextField *usr;
@property (nonatomic, retain) UITextField *pwd;
@property (nonatomic, retain) UIButton *reg;
@property (nonatomic, retain) UIButton *fgt;

- (void)watchAction:(NSInteger)n login:(void(^)(NSInteger))lx reg:(void(^)(NSInteger))rx forget:(void(^)(NSInteger))fx;
@property (copy, nonatomic) void (^loginCB)(NSInteger i);
@property (copy, nonatomic) void (^registerCB)(NSInteger i);
@property (copy, nonatomic) void (^forgetCB)(NSInteger i);

@end

NS_ASSUME_NONNULL_END
