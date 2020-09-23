//
//  TextPanel.h
//  TestEasy
//
//  Created by John Blaine on 9/23/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN


@interface TextPanel : UIView<UITextFieldDelegate>

@property (nonatomic, retain) UITextField *title;
@property (nonatomic, retain) UITextField *txt;
@property (nonatomic, retain) UITextField *error;

- (id)initWithFrame:(CGRect)frame name:(NSString*)n;

@end

NS_ASSUME_NONNULL_END
