//
//  iHome.h
//  iHome
//
//  Created by John Blaine on 9/20/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//! Project version number for iHome.
FOUNDATION_EXPORT double iHomeVersionNumber;

//! Project version string for iHome.
FOUNDATION_EXPORT const unsigned char iHomeVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <iHome/PublicHeader.h>


@interface iHome : UIView

@property (nonatomic, retain) UIImageView *logo;
@property (nonatomic, retain) UITextView *dscr;
@property (nonatomic, retain) UIImageView *cimg;
@property (nonatomic, retain) UIButton *editBtn;
@property (nonatomic, retain) UIButton *filter;

- (NSString*) fetchDscr;

- (void) addDscr:(NSString*)d;
- (void) addPhoto:(NSString*)u date:(NSString*)d;
- (void) addLogo:(NSString*)u date:(NSString*)d;

- (void) refresh;
- (void) addFilter:(UIColor*) c alp:(float) a;

- (void) testing;

@end
