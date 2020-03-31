//
//  MailHomeCell.h
//  email
//
//  Created by kl on 2018/1/26.
//  Copyright © 2018年 Financial. All rights reserved.
//

#import <UIKit/UIKit.h>
@class MCOMessageParser;
@interface MailHomeCell : UITableViewCell
@property (nonatomic, strong) MCOMessageParser *model;

+ (instancetype)mailHomeCellWithTableview:(UITableView *)tableview;
@end
