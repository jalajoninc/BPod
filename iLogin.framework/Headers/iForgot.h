//
//  iForgot.h
//  TestFramework
//
//  Created by John Blaine on 9/13/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface iForgot : UIView
@property (nonatomic, retain) UIButton *title;
@property (nonatomic, retain) UITextField *usr;
@property (nonatomic, retain) UIButton *reg;

- (void)watchAction:(NSInteger)n login:(void(^)(NSInteger))lx reg:(void(^)(NSString *phone))rx forget:(void(^)(NSInteger))fx;
@property (copy, nonatomic) void (^loginCB)(NSInteger i);
@property (copy, nonatomic) void (^registerCB)(NSString *phone);
@property (copy, nonatomic) void (^forgetCB)(NSInteger i);

@end

NS_ASSUME_NONNULL_END
