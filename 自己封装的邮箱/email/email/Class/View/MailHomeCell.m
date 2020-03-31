//
//  MailHomeCell.m
//  email
//
//  Created by kl on 2018/1/26.
//  Copyright © 2018年 Financial. All rights reserved.
//

#import "MailHomeCell.h"
#import <MailCore/MCOMessageParser.h>
#import <objc/runtime.h>
#import <MailCore/MCOConstants.h>
static char *messageParserFlags = "flags";

@interface MailHomeCell ()
@property (weak, nonatomic) IBOutlet UIButton *userImage;
@property (weak, nonatomic) IBOutlet UIImageView *readImage; // 是否阅读
@property (weak, nonatomic) IBOutlet UILabel *userName; // 名称
@property (weak, nonatomic) IBOutlet UILabel *timeLable; // 日期
@property (weak, nonatomic) IBOutlet UIImageView *accesImage; // 附件标志
@property (weak, nonatomic) IBOutlet UILabel *content; // 邮件内容
@property (weak, nonatomic) IBOutlet UIImageView *importMail; // 重要邮件

@end

@implementation MailHomeCell

+ (instancetype)mailHomeCellWithTableview:(UITableView *)tableview
{
    static NSString *identifier = @"MailHomeCell";
    MailHomeCell *cell = [tableview dequeueReusableCellWithIdentifier:identifier];
    if (cell == nil) {
        cell = [[[NSBundle bundleForClass:self] loadNibNamed:identifier owner:nil options:nil] firstObject];
    }
    return cell;
}

- (void)awakeFromNib{
    [super awakeFromNib];
    _userImage.layer.masksToBounds = YES;
    _userImage.layer.cornerRadius = 20; //圆角
    _userImage.layer.borderWidth = 1;
    [_userImage setBackgroundColor:[UIColor whiteColor]];
    _userImage.layer.borderColor = [[UIColor colorWithRed:23/255.0 green:138/255.0 blue:218/255.0 alpha:1.0] CGColor];
    [_userImage setTitleColor:[UIColor colorWithRed:23/255.0 green:138/255.0 blue:218/255.0 alpha:1.0]  forState:UIControlStateNormal];
}

- (void)setModel:(MCOMessageParser *)model
{
    
    NSDateFormatter* dateFormatter = [[NSDateFormatter alloc]init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd"];//yyyy-MM-dd HH:mm:ss
    NSString* date1 = [dateFormatter stringFromDate:[NSDate date]];
    NSString* date2 = [dateFormatter stringFromDate:model.header.date];
    if ([date1 isEqualToString:date2]) {
        [dateFormatter setDateFormat:@"HH:mm"];
    } else {
        [dateFormatter setDateFormat:@"MM月dd日"];
    }
    self.timeLable.text = [dateFormatter stringFromDate:model.header.date];
    self.content.text = model.header.subject;
    
    NSString* fromStr = model.header.from.displayName;
    if (!fromStr.length) {
        fromStr = model.header.from.mailbox;
    }
    
    // 用户名
    self.userName.text = fromStr;
    [self.userImage setTitle:[fromStr substringToIndex:1] forState:0];

    // 附件显示
    if (model.attachments.count) {
        [self.accesImage setHidden:NO];
    }else{
        [self.accesImage setHidden:YES];
    }

    NSString* bulePointStr = @"";
    NSString* redflagStr = @"";
    
    NSNumber *flagsNum = objc_getAssociatedObject(model, messageParserFlags);
    
    if (flagsNum.integerValue&1<<0) { // 未读
        self.readImage.hidden = NO;
        bulePointStr = @"标为未读";
    }else{ // 已读
        self.readImage.hidden = YES;
        bulePointStr = @"标为已读";
    }
    if (flagsNum.integerValue&1<<2) {
        self.importMail.hidden = NO;
        redflagStr = @"取消红旗";
    }else{
        self.importMail.hidden = YES;
        redflagStr = @"标为红旗";
    }

}

@end
