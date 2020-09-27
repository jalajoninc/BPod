//
//  ObjCViewController.h
//  Example
//
//  Created by John Blaine on 9/27/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>
@import iLogin;

NS_ASSUME_NONNULL_BEGIN

@interface ObjCViewController : UIViewController
@property (nonatomic, strong) iLogin *login;

@end

NS_ASSUME_NONNULL_END
