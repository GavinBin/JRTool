//
//  ViewController.m
//  YYAleatView
//
//  Created by kl on 2019/11/13.
//  Copyright © 2019 kl. All rights reserved.
//

#import "ViewController.h"
#import "YYAleatViewTool.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [YYAleatViewTool showAleatView:self.view defineBtnClick:^{
        
        
    }];
}


@end
