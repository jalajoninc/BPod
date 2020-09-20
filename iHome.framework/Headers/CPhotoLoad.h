//
//  CPhotoLoad.h
//  iHome
//
//  Created by John Blaine on 9/20/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CPhotoLoad : NSObject
- (void)taskWithName:(NSString*)u date:(NSString*)d local:(void (^)(UIImage* i, NSString *fn))clocal;

@end

NS_ASSUME_NONNULL_END
