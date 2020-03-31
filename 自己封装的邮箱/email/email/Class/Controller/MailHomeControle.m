//
//  MailHomeControle.m
//  email
//
//  Created by kl on 2018/1/26.
//  Copyright © 2018年 Financial. All rights reserved.
//
#import <Foundation/Foundation.h>

#import "MailHomeControle.h"
#import "emailNetWorkTool.h"
#import "MailHomeCell.h"
@interface MailHomeControle ()<UITableViewDataSource,UITableViewDelegate>

@property (nonatomic, strong) UITableView *tableView;

@property (nonatomic, strong) NSMutableArray<MCOMessageParser*> *mailModelArray;

@end

@implementation MailHomeControle

- (NSMutableArray *)mailModelArray
{
    if (!_mailModelArray) {
        _mailModelArray = [[NSMutableArray alloc] init];
    }
    return _mailModelArray;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    _tableView = [[UITableView alloc] initWithFrame:self.view.bounds style:UITableViewStylePlain];
    _tableView.delegate = self;
    _tableView.dataSource = self;
    _tableView.rowHeight = 80;
    [self.view addSubview:_tableView];
    [self getMailModelArray];
 
}

- (void)getMailModelArray
{
    __weak typeof(self)weakSelf = self;
    [emailNetWorkTool getPOPMailData:0 withFolder:@"INBOX" CompletionBlock:^(NSError *error, NSMutableArray<MCOMessageParser *> *messages, MCOIndexSet *vanishedMessages) {

        weakSelf.mailModelArray = messages;
        [weakSelf.tableView reloadData];
    }];
    
}


#pragma -mark tableView-delegate
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    MCOMessageParser *msgParser = self.mailModelArray[indexPath.row];
    MailHomeCell *cell = [MailHomeCell mailHomeCellWithTableview:tableView];
    cell.model = msgParser;
    return cell;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.mailModelArray.count;
}

@end
