//
//  ViewController.m
//  email
//
//  Created by kl on 2018/1/26.
//  Copyright © 2018年 Financial. All rights reserved.
//

#import "ViewController.h"
#import "emailNetWorkTool.h"
#import "MRProgressOverlayView.h"
#import "MailHomeControle.h"
@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITextField *username;
@property (weak, nonatomic) IBOutlet UITextField *password;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)emailLoginClick:(UIButton *)sender {
    __weak typeof(self)weakSelf = self;
    
    [MRProgressOverlayView showOverlayAddedTo:self.view title:@"正在登陆..." mode:MRProgressOverlayViewModeDeterminateCircular animated:YES];
    
    [emailNetWorkTool POPlogin:_username.text password:_password.text errorBlock:^(NSError *error) {
        if(error==nil){ // 成功
        [MRProgressOverlayView dismissOverlayForView:self.view animated:YES];
            MailHomeControle *vc = [[MailHomeControle alloc] init];
            [self presentViewController:vc animated:YES completion:nil];
        }else{
            NSString *errorString=[NSString stringWithFormat:@"%@",error];
            UIAlertView *alertView=[[UIAlertView alloc]initWithTitle:@"登陆失败" message:errorString delegate:nil cancelButtonTitle:@"确定" otherButtonTitles:nil, nil];
            [alertView show];
        }
    }];
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
