//
//  ObjCViewController.m
//  Example
//
//  Created by John Blaine on 9/27/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import "ObjCViewController.h"

@interface ObjCViewController ()

@end

@implementation ObjCViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.login = [[iLogin alloc] initWithFrame:CGRectZero];
    [self.view addSubview:self.login];
    
    [self watchAction];
}

- (void)watchAction{
//    [self.login watchAction:1 login:^BOOL(NSString *usr, NSString *pwd) {
//        return false;
//    } reg:^BOOL(NSString *name, NSString *phone) {
//        return false;
//    } forget:^BOOL(NSString *phone) {
//        return false;
//    } createPwd:^BOOL(NSString *pwd) {
//        return false;
//    } verify:^BOOL(NSString *code) {
//        return false;
//    }];
    
}

- (void)viewWillLayoutSubviews{
    CGFloat w = self.view.frame.size.width;
    CGFloat h = self.view.frame.size.height;
    self.login.frame = CGRectMake( w * 0.0, h * 0.0,  w * 1.0,  h * 1.0 );
}

@end
