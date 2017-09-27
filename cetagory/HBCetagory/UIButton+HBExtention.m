//
//  UIButton+HBExtention.m
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/22.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import "UIButton+HBExtention.h"
#import "HBDfine.h"
#define buttonUnableDeepColor [UIColor colorWithHexString:@"fbac7c"]
#define buttonUnableShallowColor [UIColor colorWithHexString:@"fbcb83"]
@implementation UIButton (HBExtention)

/**
 添加enabled按钮的渐变颜色
 */
- (void)hb_addButtonAvailableColor;
{
    CAGradientLayer *gradientLayer = [CAGradientLayer layer];
    gradientLayer.colors = @[(__bridge id)HBShallowColor.CGColor,(__bridge id)HBDeepColor.CGColor];
    //位置x,y    自己根据需求进行设置   使其从不同位置进行渐变
    gradientLayer.startPoint = CGPointMake(0, 0);
    gradientLayer.endPoint = CGPointMake(1, 0);
    gradientLayer.frame = CGRectMake(0, 0, self.width, CGRectGetHeight(self.frame));
    gradientLayer.zPosition = -1;
    [self.layer addSublayer:gradientLayer];
}
/**
 添加unabled按钮的渐变颜色
 */
- (void)hb_addButtonUnavailableColor;
{
    CAGradientLayer *gradientLayer = [CAGradientLayer layer];
    gradientLayer.colors = @[(__bridge id)buttonUnableShallowColor.CGColor,(__bridge id)buttonUnableDeepColor.CGColor];
    //位置x,y    自己根据需求进行设置   使其从不同位置进行渐变
    gradientLayer.startPoint = CGPointMake(0, 0);
    gradientLayer.endPoint = CGPointMake(1, 0);
    gradientLayer.frame = CGRectMake(0, 0, self.width, CGRectGetHeight(self.frame));
    gradientLayer.zPosition = -1;
    [self.layer addSublayer:gradientLayer];
}

@end
