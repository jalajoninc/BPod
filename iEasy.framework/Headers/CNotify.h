//
//  CNotify.h
//  Quantum
//
//  Created by John Blaine on 5/8/19.
//  Copyright © 2019 John W. Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CNotify : UIView

@property (nonatomic, retain) UIButton *msg;
@property (nonatomic, retain) UIButton *cart;

//- (void) showIt;
- (void) showIt:(NSString*)s;

@end

NS_ASSUME_NONNULL_END
