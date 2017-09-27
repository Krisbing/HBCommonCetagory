//
//  HBConstants.h
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/21.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

#define autoSizeScaleX SCREEN_WIDTH/320
#define autoSizeScaleY SCREEN_HEIGHT/568

#define DLog NSLog(@"--已经释放了%@--",[self class])

//基本字体13号
#define HBBaseTextFont font(13)
//小号字体11号
#define HBSmallTextFont font(11)

/** 控制器背景颜色 */
#define HBBaseColor [UIColor colorWithHexString:@"f8f8f8"]
/** 渐变色深色 */
#define HBDeepColor [UIColor colorWithHexString:@"ff6600"]
/** 渐变色浅色 */
#define HBShallowColor [UIColor colorWithHexString:@"ff9d0e"]
/** 线条颜色 */
#define HBLineColor [UIColor colorWithHexString:@"e4e4e4"]
/** 字体颜色深色 */
#define HBDeepTextColor [UIColor colorWithHexString:@"333333"]
/** 字体颜色浅色 */
#define HBShallowTextColor [UIColor colorWithHexString:@"999999"]
/** 轮播图高度 */
#define KcycleHeight  180 * autoSizeScaleX

#define IMG(str) [UIImage imageNamed:str]

#define rect(x,y,w,h) CGRectMake(x, y, w, h)

#define font(size) [UIFont systemFontOfSize:size]

/** NavBar高度 */
UIKIT_EXTERN CGFloat const HBNavBarHeight;
/** tabbar高度 */
UIKIT_EXTERN CGFloat const HBTabBarHeight;
/** 间距15 */
UIKIT_EXTERN CGFloat const HBcommonMagrin;



/** 用户id */
UIKIT_EXTERN NSString * const HBuserID;
/** 用户手机号码 */
UIKIT_EXTERN NSString *const HBCellPhone;
/** 账户密码 */
UIKIT_EXTERN NSString *const HBPassWord;
/** 支付密码 */
UIKIT_EXTERN NSString *const HBPayPassWord;
/** 登录状态 */
UIKIT_EXTERN NSString *const HBLoginStatus;
