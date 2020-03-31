//
//  YYAleatViewTool.h
//  YYAleatView
//
//  Created by kl on 2019/11/13.
//  Copyright © 2019 kl. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YYAleatViewTool : NSObject

+(void)showAleatView:(UIView *)view defineBtnClick:(void (^)(void))defineClick;

@end

NS_ASSUME_NONNULL_END
