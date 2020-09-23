//
//  iEasy.h
//  iEasy
//
//  Created by John Blaine on 9/21/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CNotify.h"
#import "TextPanel.h"

//! Project version number for iEasy.
FOUNDATION_EXPORT double iEasyVersionNumber;

//! Project version string for iEasy.
FOUNDATION_EXPORT const unsigned char iEasyVersionString[];


@interface iEasy : UIView

@property (nonatomic, retain) NSMutableArray *button;
@property (nonatomic, retain) NSMutableArray *text;
@property (nonatomic, retain) CNotify *msg;

- (id)initWithFrame:(UIColor*)bx bgText:(UIColor*)a fgText:(UIColor*)b bgButton:(UIColor*)c fgButton:(UIColor*)d;

@property UIColor *bgTxt;
@property UIColor *fgTxt;
@property UIColor *bgBtn;
@property UIColor *fgBtn;



- (void) testing;
- (void) refresh;

- (NSString*) getText:(NSString*)n;

- (void) addTextField:(NSString*)n x:(CGFloat)xp y:(CGFloat)yp w:(CGFloat)wp h:(CGFloat)hp;
- (void) addButton:(NSString*)n x:(CGFloat)xp y:(CGFloat)yp w:(CGFloat)wp h:(CGFloat)hp;

- (void)watchAction:(NSInteger)n action:(void(^)(NSString *nm))lx text:(void(^)(NSString *nm, NSString *s))tx;
@property (copy, nonatomic) void (^actionCB)(NSString *nm);
@property (copy, nonatomic) void (^textCB)(NSString *nm, NSString *s);

@end
