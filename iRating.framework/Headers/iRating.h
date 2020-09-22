//
//  iRating.h
//  iRating
//
//  Created by John Blaine on 9/20/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Star.h"

//! Project version number for iRating.
FOUNDATION_EXPORT double iRatingVersionNumber;
FOUNDATION_EXPORT const unsigned char iRatingVersionString[];


IB_DESIGNABLE
@interface iRating : UIView

- (id)initWithFrame:(CGRect)frame bg:(UIColor*)b fg:(UIColor*)f;

@property (nonatomic, retain) NSMutableArray *star;
@property CGPoint start;
@property CGPoint end;
@property int num;

- (void)watchAction:(CGFloat)n rating:(BOOL(^)(CGFloat val))rt;

@property (copy, nonatomic) BOOL (^ratingCB)(CGFloat val );
@end

