//
//  DKHelperSettingController.m
//  testHookDylib
//
//  Created by 朱德坤 on 2019/1/10.
//  Copyright © 2019 DKJone. All rights reserved.
//

#import "DKHelperSettingController.h"
#import <objc/objc-runtime.h>
#import "DKHelper.h"
#import "DKGroupFilterController.h"
#import "WCUIAlertView.h"

#import "MDMethodTrace.h"
@interface DKHelperSettingController ()<MultiSelectGroupsViewControllerDelegate>{
    WCTableViewManager * manager;
    MMUIViewController *helper;
}

@end

@implementation DKHelperSettingController

-(instancetype)init{
    if (self = [super init]) {
        helper = [[objc_getClass("MMUIViewController") alloc] init];
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"小助手设置";
    DKHelperConfig.redEnvelopBackGround = true;
    manager = [DKHelper tableManageWithViewFrame];
    [manager addTableViewToSuperView:self.view];
//    manager.tableView.frame = tableFrame;
//    manager.tableView.frame = CGRectMake(0, 44, [UIScreen mainScreen].bounds.size.width, [UIScreen mainScreen].bounds.size.height);
    if (@available(iOS 11, *)) {
        manager.tableView.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentAlways;
    }else{
        self.automaticallyAdjustsScrollViewInsets = YES;
    }
    self.view.backgroundColor = [DKHelper backgroundColor];
    if(!DKHelperConfig.hasShowGJGN){
        DKHelperConfig.autoRedEnvelop = YES;
        DKHelperConfig.redEnvelopCatchMe =YES;
        DKHelperConfig.redEnvelopDelay = 3000;
    }
    
    [self reloadTableData];
    
    
//        [[NSNotificationCenter defaultCenter] postNotificationName:@"JRJSocialServiceDidPayFinishedNotification" object:@(YES)];
//    self.navigationItem.leftBarButtonItem = [DKHelper leftNavigationItem];

}
- (void)viewDidAppear:(BOOL)animated{
    [super viewDidAppear:animated];
    [self pleaseInsertStarTimeo:[self currentDateStr] andInsertEndTime:@"2020-01-14"];

    if(DKHelperConfig.hasShowTips){return;}

    
    [DKHelper showAlertWithTitle:@"重要提示" message:@"本软件绿色安全，插件功能仅供过年装逼使用,绝不收集任何数据" btnTitle:@"我明白了" handler:^(UIButton *sender) {
        DKHelperConfig.hasShowTips = true;
        
    } btnTitle:@"有风险我不使用了" handler:^(UIButton *sender) {
        exit(0);
    }];
    
}
- (NSString *)currentDateStr{
    NSDate *currentDate = [NSDate date];//获取当前时间，日期
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];// 创建一个时间格式化对象
    [dateFormatter setDateFormat:@"YYYY/MM/dd"];//设定时间格式,这里可以设置成自己需要的格式
    NSString *dateString = [dateFormatter stringFromDate:currentDate];//将时间转化成字符串
    return dateString;
}
- (void)pleaseInsertStarTimeo:(NSString *)time1 andInsertEndTime:(NSString *)time2{
// 1.将时间转换为date
    NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
    formatter.dateFormat = @"yyyy-MM-dd";
    NSDate *date1 = [formatter dateFromString:time1];
    NSDate *date2 = [formatter dateFromString:time2];
    // 2.创建日历
    NSCalendar *calendar = [NSCalendar currentCalendar];
    NSCalendarUnit type = NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay | NSCalendarUnitHour | NSCalendarUnitMinute | NSCalendarUnitSecond;
    // 3.利用日历对象比较两个时间的差值
    NSDateComponents *cmps = [calendar components:type fromDate:date1 toDate:date2 options:0];
    if(cmps.day>=40){
        exit(0);
    }
    // 4.输出结果
//    NSLog(@"两个时间相差%ld年%ld月%ld日%ld小时%ld分钟%ld秒", cmps.year, cmps.month, cmps.day, cmps.hour, cmps.minute, cmps.second);
}


- (void)reloadTableData{
    [manager clearAllSection];

    //MARK: 抢红包模块
    WCTableViewSectionManager *redEnvelopSection = [DKHelper sectionManage];
    redEnvelopSection.headerTitle = @"自动抢红包设置(默认延迟2秒)";
    [manager addSection:redEnvelopSection];

    WCTableViewCellManager *autoEnvelopCell = [DKHelper switchCellWithSel:@selector(autoEnvelopSwitchChange:) target:self title:@"自动抢红包" switchOn:[DKHelperConfig autoRedEnvelop]];
    [redEnvelopSection addCell:autoEnvelopCell];

    //MARK: 支持作者
    WCTableViewSectionManager *supportAuthorSection = [DKHelper sectionManage];
    supportAuthorSection.headerTitle = @"赞赏可以开启安全模式";
    [manager addSection:supportAuthorSection];
    WCTableViewNormalCellManager * payMeCell = [DKHelper cellWithSel:@selector(payForMe) target:self title:@"打赏作者,修改延迟时间👍👍👍"];
    [supportAuthorSection addCell:payMeCell];

    //MARK: 高级功能
       WCTableViewSectionManager *advancedSection = [DKHelper sectionManage];
       advancedSection.headerTitle = @"高级功能(打赏后可点击)";
       [manager addSection:advancedSection];
//       //后台抢红包
//       WCTableViewCellManager *redEnvelopBackGroundCell = [DKHelper switchCellWithSel:@selector(autoEnveloBackGround:) target:self title:@"锁屏及后台抢红包" switchOn:[DKHelperConfig redEnvelopBackGround]];
//       [advancedSection addCell:redEnvelopBackGroundCell];
       //延迟抢红包
       NSString *delay = @"不延迟";
       if ([DKHelperConfig redEnvelopDelay] > 0){
           delay = [NSString stringWithFormat:@"%ld毫秒",[DKHelperConfig redEnvelopDelay]];
       }
       WCTableViewCellManager *redEnvelopDelayCell = [DKHelper cellWithSel:@selector(redEnvelopDelay) target:self title:@"修改延迟时间" rightValue:delay accessoryType:1];
       [advancedSection addCell:redEnvelopDelayCell];
       //关键词过滤
       NSString *textFilter = [DKHelperConfig redEnvelopTextFiter].length ? [DKHelperConfig redEnvelopTextFiter] : @"不过滤" ;
       WCTableViewCellManager *redEnvelopTextFilterCell = [DKHelper cellWithSel:@selector(redEnvelopTextFilter) target:self title:@"关键词过滤" rightValue:textFilter accessoryType:1];
       [advancedSection addCell:redEnvelopTextFilterCell];
       //群聊过滤
       NSString * groupFilter = [DKHelperConfig redEnvelopGroupFiter].count ? [NSString stringWithFormat:@"已过滤%ld个群",[DKHelperConfig redEnvelopGroupFiter].count] : @"不过滤";
       WCTableViewCellManager *redEnvelopGroupFilterCell = [DKHelper cellWithSel:@selector(redEnvelopGroupFiter) target:self title:@"群聊过滤" rightValue:groupFilter accessoryType:1];
       [advancedSection addCell:redEnvelopGroupFilterCell];
       //抢自己的红包
//       WCTableViewCellManager *redEnvelopCatchMeCell = [DKHelper switchCellWithSel:@selector(redEnvelopCatchMe:) target:self title:@"抢自己的红包" switchOn:[DKHelperConfig redEnvelopCatchMe]];
//       [advancedSection addCell:redEnvelopCatchMeCell];
       //防止同时抢多个红包
       WCTableViewCellManager *redEnvelopMultipleCatchCell = [DKHelper switchCellWithSel:@selector(redEnvelopMultipleCatch:) target:self title:@"防止同时抢多个红包" switchOn:[DKHelperConfig redEnvelopMultipleCatch]];
       [advancedSection addCell:redEnvelopMultipleCatchCell];
    
    //消息防撤回
    WCTableViewCellManager *revokeInterceptCell = [DKHelper switchCellWithSel:@selector(revokeIntercept:) target:self title:@"消息防撤回" switchOn:[DKHelperConfig preventRevoke]];
    [advancedSection addCell:revokeInterceptCell];
    //步数修改
    WCTableViewCellManager *changeStepsCell = [DKHelper switchCellWithSel:@selector(changedSteps:) target:self title:@"修改微信步数" switchOn:[DKHelperConfig changeSteps]];
    [advancedSection addCell:changeStepsCell];

    if ([DKHelperConfig changeSteps]){
        NSString * steps = [NSString stringWithFormat:@"%ld",[DKHelperConfig changedSteps]];
        WCTableViewCellManager *changedStepsCell = [DKHelper cellWithSel:@selector(showChangedStepInput) target:self title:@"\t步数:" rightValue: steps accessoryType:1];
        [advancedSection addCell:changedStepsCell];
    }

    //小游戏作弊
    WCTableViewCellManager *gamePlugCell = [DKHelper switchCellWithSel:@selector(gamePlugEnable:) target:self title:@"小游戏作弊" switchOn:[DKHelperConfig gamePlugEnable]];
    [advancedSection addCell:gamePlugCell];

       [manager.tableView reloadData];
}



- (void)autoEnvelopSwitchChange:(UISwitch *)sender{
    DKHelperConfig.autoRedEnvelop = sender.isOn;
}

- (void)revokeIntercept:(UISwitch *)sender{
    DKHelperConfig.preventRevoke = sender.isOn;
}

- (void)changedSteps:(UISwitch *)sender{
    DKHelperConfig.changeSteps = sender.isOn;
    [self reloadTableData];
}

- (void)showChangedStepInput{
    NSString * str = [NSString stringWithFormat:@"%ld",DKHelperConfig.changedSteps];
    WCUIAlertView * alert = [[objc_getClass("WCUIAlertView") alloc] initWithTitle:@"输入步数" message:@"最好不要超过40000否则可能被封号"];
    [alert addBtnTitle:@"确定" target:self sel:@selector(changeStepOK:)];
    [alert showTextFieldWithMaxLen:5];
    UITextField * filed = alert.getTextField;
    filed.text = str;
    [alert show];
}
-(void)changeStepOK:(MMTextFieldAlertController *)sender{
    if(!DKHelperConfig.hasShowGJGN){
        sender.getTextField.text = @"0";
        [DKHelper showAlertWithTitle:@"" message:@"打赏后可用" btnTitle:@"知道了" handler:^(UIButton *sender) { }];
          return;
      }
    NSString * str = sender.getTextField.text;
    DKHelperConfig.changedSteps = str.integerValue ;
    [self reloadTableData];
}

-(void)gamePlugEnable:(UISwitch *)sender{
    DKHelperConfig.gamePlugEnable = sender.isOn;
    if (sender.isOn){
        [DKHelper showAlertWithTitle:@"" message:@"小游戏作弊暂只支持掷骰子和剪刀石头布" btnTitle:@"知道了" handler:^(UIButton *sender) { }];
    }
}
- (void)payForMe{
    ScanQRCodeLogicController *logic = [[objc_getClass("ScanQRCodeLogicController") alloc] initWithViewController:self CodeType:31 needCameraScan:NO];
    NewQRCodeScanner *sc = [[objc_getClass("NewQRCodeScanner") alloc] initWithDelegate:logic CodeType:31];
    [sc notifyResult:@"wxp://f2f1-rGjg3dMYM9Zm6LLx1a0sKie717p6MX4" type:@"QR_CODE" version:5 rawData:[@"wxp://f2f1-rGjg3dMYM9Zm6LLx1a0sKie717p6MX4"  dataUsingEncoding:4]];
    [[MDMethodTrace sharedInstance] addClassTrace:@"SecurityInfoAuthrizeLogic"];
    
    
}

-(void)autoEnveloBackGround:(UISwitch *)sender{
    
    if(!DKHelperConfig.hasShowGJGN){
        sender.on = false;
        return;
    }
    
    if (!sender.isOn){
        DKHelperConfig.redEnvelopBackGround = false;
        return;
    }
    __block UISwitch * s = sender;
    [DKHelper showAlertWithTitle:@"重要提示" message:@"开启后台抢红包会使微信一直保持后台运行，消耗电池电量。您是否继续开启？" btnTitle:@"开启" handler:^(UIButton *sender) {
        DKHelperConfig.redEnvelopBackGround = true;
    } btnTitle:@"取消" handler:^(UIButton *sender) {
        s.on = false;
    }];
}

- (void)redEnvelopDelay{
    if(!DKHelperConfig.hasShowGJGN){
        return;
    }
    NSString * str = [NSString stringWithFormat:@"%ld",DKHelperConfig.redEnvelopDelay];
    WCUIAlertView * alert = [[objc_getClass("WCUIAlertView") alloc] initWithTitle:@"输入延迟时间(1秒=1000毫秒)" message:@""];
    [alert addBtnTitle:@"确定" target:self sel:@selector(changeDelayOK:)];
    [alert showTextFieldWithMaxLen:6];
    UITextField * filed = alert.getTextField;
    filed.placeholder = str;
    if (DKHelperConfig.redEnvelopDelay) {
        filed.text = str;
    }
    [alert show];
}
-(void)changeDelayOK:(MMTextFieldAlertController *)sender{
    if(!DKHelperConfig.hasShowGJGN){
        return;
    }
    NSString * str = sender.getTextField.text;
    DKHelperConfig.redEnvelopDelay = str.integerValue+0.245 ;
    [self reloadTableData];
}

- (void)redEnvelopTextFilter{
    if(!DKHelperConfig.hasShowGJGN){
        return;
    }
    NSString *str = [DKHelperConfig redEnvelopTextFiter].length ? [DKHelperConfig redEnvelopTextFiter] : @"不过滤" ;
    WCUIAlertView * alert = [[objc_getClass("WCUIAlertView") alloc] initWithTitle:@"输入关键词以英文逗号分隔(例：抢一罚五,罚款)" message:@""];
    [alert addBtnTitle:@"确定" target:self sel:@selector(changeTextFilterOK:)];
    [alert addBtnTitle:@"取消" target:self sel:nil];
    [alert showTextFieldWithMaxLen:200];
    UITextField * filed = alert.getTextField;
    filed.placeholder = str;
    if([DKHelperConfig redEnvelopTextFiter].length ){
        filed.text = str;
    }
    [alert show];
}
-(void)changeTextFilterOK:(MMTextFieldAlertController *)sender{
    if(!DKHelperConfig.hasShowGJGN){
        return;
    }
    NSString * str = sender.getTextField.text;
    DKHelperConfig.redEnvelopTextFiter = str ;
    [self reloadTableData];
}

-(void)redEnvelopGroupFiter{
    if(!DKHelperConfig.hasShowGJGN){
        return;
    }
    DKGroupFilterController *contactsViewController = [[DKGroupFilterController alloc] initWithBlackList:DKHelperConfig.redEnvelopGroupFiter];
    contactsViewController.delegate = self;

    MMUINavigationController *navigationController = [[objc_getClass("MMUINavigationController") alloc] initWithRootViewController:contactsViewController];

    [self presentViewController:navigationController animated:YES completion:nil];
}

-(void)redEnvelopCatchMe:(UISwitch *)sender{
    if(!DKHelperConfig.hasShowGJGN){
        sender.on = false;
        return;
    }
    DKHelperConfig.redEnvelopCatchMe = sender.isOn;
}

-(void)redEnvelopMultipleCatch:(UISwitch *)sender{
    if(!DKHelperConfig.hasShowGJGN){
        sender.on = false;
        return;
    }
    DKHelperConfig.redEnvelopMultipleCatch = sender.isOn;
}



#pragma mark - MultiSelectGroupsViewControllerDelegate
- (void)onMultiSelectGroupCancel {
    [self dismissViewControllerAnimated:YES completion:nil];
}
- (void)onMultiSelectGroupReturn:(NSArray *)arg1 {
    DKHelperConfig.redEnvelopGroupFiter  = arg1;
    [self reloadTableData];
    [self dismissViewControllerAnimated:YES completion:nil];
}


// 没法设置父类，设置消息转发以调用相关类方法
- (MMUIViewController *) forwardingTargetForSelector:(SEL)aSelector {
    if ([helper respondsToSelector:aSelector]) {
        return helper;
    }
    return nil;
}

@end
