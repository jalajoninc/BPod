//
//  CTextView.h
//  TestEasy
//
//  Created by John Blaine on 10/4/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CTextView : UIView<UITextViewDelegate>

@property (nonatomic, retain) UITextField *title;
@property (nonatomic, retain) UITextView *txt;
@property (nonatomic, retain) UITextField *error;
@property (nonatomic, retain) UIImageView *photo;


- (id)initWithFrame:(CGRect)frame name:(NSString*)n photo:(UIImage*)p;


- (void)watchAction:(NSInteger)n text:(NSObject*(^)(NSString *nm, NSString *s))tx;
@property (copy, nonatomic) NSObject* (^textCB)(NSString *nm, NSString *s);

@end

NS_ASSUME_NONNULL_END
