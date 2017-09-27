//
//  UIView+HBExtention.m
//  huangjinqianzhuang
//
//  Created by 贺兵 on 2017/9/21.
//  Copyright © 2017年 贺兵. All rights reserved.
//

#import "UIView+HBExtention.h"
#import "HBDfine.h"
@implementation UIView (HBExtention)

//将UIView转成UIImage
+ (UIImage *)hb_getImageFromView:(UIView *)theView
{
    // 下面方法，第一个参数表示区域大小。第二个参数表示是否是非透明的。如果需要显示半透明效果，需要传NO，否则传YES。第三个参数就是屏幕密度了
    UIGraphicsBeginImageContextWithOptions(theView.bounds.size, NO, [UIScreen mainScreen].scale);
    [theView.layer renderInContext:UIGraphicsGetCurrentContext()];
    UIImage *image = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return image;
}
//给view添加线条
- (void)hb_addLineWithStyle:(HBaddLineStyle)style
{
    CGRect rect;
    if (style == HBaddLineStyleTop) {
        rect = CGRectMake(0, 0, self.width, 1);
    }
    else if (style == HBaddLineStyleLeft)
    {
        rect = CGRectMake(0, 0, 1, self.height);
    }
    else if (style == HBaddLineStyleRight)
    {
        rect = CGRectMake(self.width - 1, 0, 1, self.height);
    }
    else{
        rect = CGRectMake(0, self.height - 1, self.width, 1);
    }
    UIImageView *lineImageView = [UIImageView new];
    lineImageView.frame = rect;
    lineImageView.backgroundColor = HBLineColor;
    [self addSubview:lineImageView];
}
/**
 给view添加渐变颜色
 */
- (void)hb_addGradientColorToView
{
    CAGradientLayer *gradientLayer = [CAGradientLayer layer];
    gradientLayer.colors = @[(__bridge id)HBDeepColor.CGColor,(__bridge id)HBShallowColor.CGColor];
    //位置x,y    自己根据需求进行设置   使其从不同位置进行渐变
    gradientLayer.startPoint = CGPointMake(0, 0);
    gradientLayer.endPoint = CGPointMake(1, 0);
    gradientLayer.frame = CGRectMake(0, 0, self.width, CGRectGetHeight(self.frame));
    gradientLayer.zPosition = -1;
    [self.layer addSublayer:gradientLayer];
}
/**
 添加小菊花
 */
- (void)addRefreshActivityView
{
    UIActivityIndicatorView *activityView = [[UIActivityIndicatorView alloc] initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleGray];
    activityView.center = self.center;
    [activityView startAnimating];
    [self addSubview:activityView];
    objc_setAssociatedObject(self, @selector(removeRefreshActivityView), activityView, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
}
/**
 移除小菊花
 */
- (void)removeRefreshActivityView
{
    UIActivityIndicatorView *activityView = objc_getAssociatedObject(self, _cmd);
    [activityView stopAnimating];
    [activityView removeFromSuperview];
}
@end
