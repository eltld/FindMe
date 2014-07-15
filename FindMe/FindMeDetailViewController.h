//
//  FindMeDetailViewController.h
//  FindMe
//
//  Created by mac on 14-7-5.
//  Copyright (c) 2014年 mac. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "User.h"
@interface FindMeDetailViewController : UIViewController<UIScrollViewDelegate>
@property (weak, nonatomic) IBOutlet UIPageControl *pageControl;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UILabel *qianming;
@property (weak, nonatomic) IBOutlet UIView *photoWallView;

@property(strong,nonatomic) NSString *userId;
@property (weak, nonatomic) IBOutlet UILabel *emptyLbl;

@property(nonatomic,strong) User *user;
@end
