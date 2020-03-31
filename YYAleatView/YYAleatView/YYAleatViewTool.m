//
//  YYAleatViewTool.m
//  YYAleatView
//
//  Created by kl on 2019/11/13.
//  Copyright © 2019 kl. All rights reserved.
//

#import "YYAleatViewTool.h"
#define IPHONE_W [UIScreen mainScreen].bounds.size.width
#define IPHONE_H [UIScreen mainScreen].bounds.size.height
#define IPHONE_RATIO IPHONE_W/375
@implementation YYAleatViewTool
typedef void(^DefineClickBlock)(void);
static UIView *contentV;
static DefineClickBlock defineClickBlock;
/** 请求成功的Block */

+(void)showAleatView:(UIView *)view defineBtnClick:(void (^)(void))defineClick;
{
    defineClickBlock = defineClick;
    CGFloat viewW = 270*IPHONE_RATIO;
    CGFloat viewH = 162*IPHONE_RATIO;
        
    contentV = [[UIView alloc] initWithFrame:CGRectMake(0, 0, viewW, viewH)];
    contentV.frame = CGRectMake(0, 0, viewW, viewH);
    contentV.center = CGPointMake(IPHONE_W*0.5, IPHONE_H*0.5);
    contentV.layer.cornerRadius = 4;
    contentV.backgroundColor = [UIColor colorWithRed:32/255.0 green:88/255.0 blue:170/255.0 alpha:1/1.0];
    [view addSubview:contentV];
    
    UILabel *titleLable = [[UILabel alloc] init];
    titleLable.text = @"逾期提醒";
    titleLable.font = [UIFont systemFontOfSize:17];
    titleLable.textColor = [UIColor whiteColor];
    titleLable.frame = CGRectMake(0, 16, 270*IPHONE_RATIO, 22);
    titleLable.textAlignment = NSTextAlignmentCenter;
    [contentV addSubview:titleLable];
    
    UILabel *msgLable = [[UILabel alloc] init];
    msgLable.text = @"尊敬的小小，您已逾期，请及时还款，以免影响您的个人征信。";
    msgLable.numberOfLines = 0;
    msgLable.font = [UIFont systemFontOfSize:14];
    msgLable.textColor = [UIColor whiteColor];
    msgLable.frame = CGRectMake(18, 58, 270*IPHONE_RATIO-36, 40);
    msgLable.textAlignment = NSTextAlignmentCenter;
    [contentV addSubview:msgLable];
    
    UIView *lineV = [[UIView alloc] initWithFrame:CGRectMake(0, viewH-44, viewW, 1)];
    lineV.backgroundColor = [UIColor whiteColor];
    lineV.alpha = 0.24;
    [contentV addSubview:lineV];
    
    UIButton *cancelBtn = [[UIButton alloc] init];
    [cancelBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [cancelBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateHighlighted];
    [cancelBtn setTitle:@"取消" forState:UIControlStateNormal];
    [cancelBtn setTitle:@"取消" forState:UIControlStateHighlighted];
    [cancelBtn addTarget:self action:@selector(cancelBtnClick) forControlEvents:UIControlEventTouchUpInside];
    cancelBtn.frame = CGRectMake(0, viewH-43, viewW*0.5, 43);
    [contentV addSubview:cancelBtn];
    
    UIView *lineH = [[UIView alloc] initWithFrame:CGRectMake(viewW*0.5-1, viewH-44, 1, 44)];
    lineH.backgroundColor = [UIColor whiteColor];
    lineH.alpha = 0.24;
    [contentV addSubview:lineH];
    
    UIButton *defineBtn = [[UIButton alloc] init];
    [defineBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [defineBtn setTitle:@"确定" forState:UIControlStateNormal];
    [defineBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateHighlighted];
    [defineBtn setTitle:@"确定" forState:UIControlStateHighlighted];
    [defineBtn addTarget:self action:@selector(defineBtnClick) forControlEvents:UIControlEventTouchUpInside];
    defineBtn.frame = CGRectMake(viewW*0.5, viewH-43, viewW*0.5, 43);
    [contentV addSubview:defineBtn];

    
}

+ (void)defineBtnClick
{
    if (defineClickBlock) {
        defineClickBlock();
    }
}

+ (void)cancelBtnClick
{
    [contentV removeFromSuperview];
    contentV = nil;
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
